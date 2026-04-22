// Task 03 [The Number of rows with a large number of positive elements]
// Количество строк с большим количество положительных элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).
#include "logic.h"

//cpu O(N^2)
int count_rows_with_more_positive_values(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (n < 1 || m < 1) {
		return -1;
	}

	int best_row = 0;

	for (int i = 0; i < n; ++i) {
		int pos_count = 0;
		int other_count = 0;

		for (int j = 0; j < m; ++j) {
			if (matrix[i][j] > 0) {
				pos_count++;
			}
			else {
				other_count++;
			}
		}

		if (pos_count > other_count) {
			best_row++;
		}
	}
	return best_row;
}