#include <iostream>
#include <vector>
using namespace std; 

class Graph {
	vector<vector<int>> matrix;
	int n;
public:
	Graph(int num = 0, int num2 = 0);
	void display();
	void give_edges();
};

Graph::Graph(int num , int num2) : n(num + 1) {
	matrix.resize(n, vector<int>(n, 0));
}
void Graph::display() {
	if (n == 0) {
		cout << "Graph is empty" << endl;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Graph::give_edges() {
	char ch{};
	int i, j;
	while (true) {
		cout << "Edge at( i , j): ";
		cin >> i;
		cin >> j;
		if (i >= n || j >= n || i <= 0 || j <= 0) {
			cout << "Invalid indices. Please enter values between 1 and " << n - 1 << endl;
			continue;
		}
		matrix[i][j] = 1;
		matrix[j][i] = 1;
		cout << "If you wants to give another edge click 'Y' otherwise 'N': ";
		cin >> ch;
		if (ch == 'n' or ch == 'N')
			break;
	}
}
int main() {
	Graph g1(7, 7);
	g1.display();
	g1.give_edges();
	g1.display();
	return 0;
}