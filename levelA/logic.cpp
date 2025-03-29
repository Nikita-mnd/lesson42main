#include <iostream>

using namespace std;

int find_max_element_above_main_diagonal(int** matrix, int size) {

	int max = matrix[0][1];

	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}
	return max;
}

int find_min_element_below_main_diagonal(int** matrix, int size) {

	int min = matrix[1][0];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}

int find_max_element_above_said_diagonal(int** matrix, int size) {

	int max = matrix[0][1];

	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size - i - 1; ++j) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}
	return max;
}

int find_min_element_below_said_diagonal(int** matrix, int size) {

	int min = matrix[1][0];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j >=size - i; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}
