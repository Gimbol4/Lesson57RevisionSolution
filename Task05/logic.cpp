// Task 05 [The last local maximum].
// Последний локальный максимум
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// находит последний локальный максимум.
#include "logic.h"

string get_last_local_maximum(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > matrix[i][j - 1] && matrix[i][j] > matrix[i][j + 1] && matrix[i][j] > matrix[i - 1][j] && matrix[i][j] > matrix[i + 1][j]) {
				max = matrix[i][j];
			}
		}
	}
	return to_string(max);
}