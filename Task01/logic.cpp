// Task 01 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// вычисляет среднее арифметическое ненулевых элементов матрицы.

#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (n < 1 || m < 1) {
		return -1;
	}
	double mid = 0.0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] != 0) {
				mid += matrix[i][j];
				k++;
			}
		}
	}
	if (k == 0) {
		return 0;
	}
	return mid / k;
}