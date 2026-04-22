// Task 02 [The sum of elements]
// Сумма элементов 
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.
#include "logic.h"

int sum_main_and_second_diagonales_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	if (n < 1) {
		return -1;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}

	for (int i = n; i > 0; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}