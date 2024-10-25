#include <iostream>

void print_table(int table[][3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << table[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

// 1D arrays
// [2, 5, 1, 3, 5]

// 2D array
// 1, -2, 7
// 12, 5, 100

// [1, -2, 7, 12, 5, 100] // Row-major order

// index = row_index * num_columns + col_idx


int main() {
	int numbers[2][3] {{1, -2, 7}, {12, 5, 100}};
	/*
	numbers[0][0] = 1;
	numbers[0][1] = -2;
	numbers[0][2] = 7;
	numbers[1][0] = 12;
	numbers[1][1] = 5;
	numbers[1][2] = 100;
	*/

}
