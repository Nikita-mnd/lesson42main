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
	for (int i = 0; i < size; ++i) {
		matrix[i] = new int[size];
	}

	cout << "Input elements of matrix:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "even positive above main diagonal: "
		<< find_positive_element_above_main_diagonal(matrix, size) << endl;
	cout << "even positive below main diagonal: "
		<< find_positive_element_below_main_diagonal(matrix, size) << endl;
	cout << "even positive above said diagonal: "
		<< find_positive_element_above_said_diagonal(matrix, size) << endl;
	cout << "even positive below said diagonal: "
		<< find_positive_element_below_said_diagonal(matrix, size) << endl;

	return 0;
}
