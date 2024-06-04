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
	int n;
	cout << "number of veritces: ";
	cin >> n;
	n = n + 1;
	vector<vector<int>> matrix(n , vector<int>(n , 0));
	cout << "Edges " << endl;
	while (true)
	{
		int x, y;
		cin >> x >> y;
		if ((x < 0 or x >= n) && (y < 0 or y >= n))
			continue;
		matrix[x][y] = 1;
		matrix[y][x] = 1;
		char ch;
		cout << "Is there any edge their: ";
		cin >> ch;
		if (ch == 'N' or ch == 'n')
			break;
	}
	cout << "Matrix" << endl;
	cout << "    ";
	for (int i = 1; i < n ; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i < n ; i++)
	{
		cout << i << " [ ";
		for (int j = 1; j < n ; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "]" << endl;
	}
	cout << "============================" << endl;
	int *ad_list[]
	return 0;
}