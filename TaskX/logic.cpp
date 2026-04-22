// Task X [The all local minimum]
// Все локальные минимумы
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает все локальные минимумы.

#include "logic.h"

string get_all_local_minimums(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (n <= 0 || m <= 0) {
		return "Error.";
	}

	string result = "";

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			bool is_min = true;
			if (i - 1 >= 0 && matrix[i - 1][j] <= matrix[i][j]) is_min = false;
			if (is_min && i + 1 < n && matrix[i + 1][j] <= matrix[i][j]) is_min = false;
			if (is_min && j - 1 >= 0 && matrix[i][j - 1] <= matrix[i][j]) is_min = false;
			if (is_min && j + 1 < m && matrix[i][j + 1] <= matrix[i][j]) is_min = false;

			if (is_min) {
				result += to_string(matrix[i][j]) + " ";
			}
		}
	}

	return result;
}