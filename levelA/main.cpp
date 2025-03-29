#include <iostream>
#include "logic.h"
using namespace std;


int main() {
	int size;
	cout << "Input size of matrix: ";
	cin >> size;
	if (size <= 0) {
		cout << "Input error." << endl;
		return 0;
	}
	int** matrix = new int* [size];

	cout << "Input elements of matrix:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}

	int max = find_maximal_element_above_main_diagonal(matrix, size);
	//delete[] matrix;
	return 0;
}

