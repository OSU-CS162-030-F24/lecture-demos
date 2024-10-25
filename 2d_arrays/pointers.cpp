#include <iostream>

void print_table(int** table, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
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

// [1, -2, 7]
// [12, 5, 100]
// 
// [p1, p2]

// index = row_index * num_columns + col_idx


int main() {
	int m;
	int n;
	std::cin >> m;
	std::cin >> n;
	int** numbers = new int*[m];
	for (int i = 0; i < m; i++) {
		numbers[i] = new int[n];
		for (int j = 0; j < n; j++) {
			numbers[i][j] = 0;
		}
	}
	
	numbers[0][0] = 1;
	numbers[0][1] = -2;
	numbers[0][2] = 7;
	numbers[1][0] = 12;
	numbers[1][1] = 5;
	numbers[1][2] = 100;

	print_table(numbers, m, n);

	for (int i = 0; i < m; i++) {
		delete [] numbers[i];
	}
	delete [] numbers;

	// Jagged array:
	// 2D array, lengths of second dimension aren't uniform
	//
	// 3 1 5
	// 2 7
	// 12 100 17 4
}
