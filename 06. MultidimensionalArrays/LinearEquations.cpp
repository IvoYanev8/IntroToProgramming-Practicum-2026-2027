#include <iostream>

const unsigned MAX_ROWS = 10;

void getMatrix(double matrix[][MAX_ROWS + 1], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(const double matrix[][MAX_ROWS + 1], unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void divideRow(double row[], double divideValue, unsigned cols) {
    for (unsigned i = 0; i < cols; i++) {
        row[i] /= divideValue;
    }
}

void subtract(double row[], double original[], double multiplier, unsigned cols) {
    for (unsigned i = 0; i < cols; i++) {
        row[i] -= original[i] * multiplier;
    }
}

void setZeroesInCol(double matrix[][MAX_ROWS + 1], unsigned currentRow, unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        if (i == currentRow) {
            continue;
        }
        subtract(matrix[i], matrix[currentRow], matrix[i][currentRow], cols);
    }
}

void solveSystem(double matrix[][MAX_ROWS + 1], unsigned rows) {
    unsigned cols = rows + 1;
    for (unsigned i = 0; i < rows; i++) {
        divideRow(matrix[i], matrix[i][i], cols);
        setZeroesInCol(matrix, i, rows, cols);
    }
}

int main() {
    double matrix[MAX_ROWS][MAX_ROWS + 1];
    unsigned rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
  
    getMatrix(matrix, rows, rows + 1);

    std::cout << "\nInitial augmented matrix:\n";
    printMatrix(matrix, rows, rows + 1);

    solveSystem(matrix, rows);

    std::cout << "\nSolution (variables values):\n";
    for (int i = 0; i < rows; i++) {
        std::cout << matrix[i][rows] << " ";
    }
    std::cout << std::endl;
}
