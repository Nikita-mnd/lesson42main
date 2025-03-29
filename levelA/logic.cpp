#include <iostream>

using namespace std;

int find_maximal_element_above_main_diagonal(int** matrix,int size) {

int max_above_diagonal = matrix[0][1];

for (int i = 0; i < size; ++i) {
    for (int j = i + 1; j < size; ++j) {
        if (max_above_diagonal < matrix[i][j]) {
            max_above_diagonal = matrix[i][j];
        }
    }
}
return max_above_diagonal;
}
