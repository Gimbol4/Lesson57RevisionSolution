// Task 04 [The Sum of elements of columns with extreme elements]
// Сумма элементов столбцов с экстремальными элементами
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.
#include "logic.h"

//cpu O(N^2)
int sum_elements_of_columns_with_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	if (n < 1 || m < 1) {
		return -1;
	}

    int min = matrix[0][0];
    int max = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] < min) min = matrix[i][j];
            if (matrix[i][j] > max) max = matrix[i][j];
        }
    }

    int sum = 0;
    
    for (int j = 0; j < m; ++j) {
        bool is_extreme = false;
        int count_column = 0;

        for (int i = 0; i < n; ++i) {
            count_column += matrix[i][j];
            if (matrix[i][j] == min || matrix[i][j] == max) {
                is_extreme = true;
            }
        }

        if (is_extreme) {
            sum += count_column;
        }
    }

    return sum;
}