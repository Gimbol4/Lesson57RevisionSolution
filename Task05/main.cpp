#include "logic.h"

int main() {
	int matrix[DEFAUL_SIZE][DEFAUL_SIZE];
	int m, n;

	cout << "Input a size of matrix (N and M): ";
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 50;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	cout << get_last_local_maximum(matrix, n, m);

	return 0;
}