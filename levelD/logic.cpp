#include <iostream>

using namespace std;

int find_zero_element_above_main_diagonal(int** matrix, int size) {

	int zero = 0;

	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (matrix[i][j] == 0) {
				zero++;
			}
		}
	}
	return zero;
}

int find_zero_element_below_main_diagonal(int** matrix, int size) {

	int zero = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] == 0) {
				zero++;
			}
		}
	}
	return zero;
}

int find_zero_element_above_said_diagonal(int** matrix, int size) {

	int zero = 0;

	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size - i - 1; ++j) {
			if (matrix[i][j] == 0) {
				zero++;
			}
		}
	}
	return zero;
}

int find_zero_element_below_said_diagonal(int** matrix, int size) {

	int zero = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j >= size - i; j++) {
			if (matrix[i][j] == 0) {
				zero++;
			}
		}
	}
	return zero;
}
