#include <iostream>
#include <vector>
using namespace std; 

class Graph {
	vector<vector<int>> matrix;
	int n;
public:
	Graph(int num = 0, int num2 = 0) : n(num + 1) {
		matrix.resize(n, vector<int>(n,  0));
	}
	void display() {
		if (n == 0) {
			cout << "Graph is empty" << endl;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < n; j++) {
				cout << matrix[i][j] << " , ";
			}
			cout << endl;
		}
	}
};
int main() {
	Graph g1(7, 7);
	g1.display();
	return 0;
}