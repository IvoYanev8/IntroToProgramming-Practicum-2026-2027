#include <iostream>

// Полиномът се представя с масив, в който индексът е степента на x, а стойността е коефициентът пред нея.
// Напишете функция, която приема два полинома с размери n и m и записва произведението им в трети масив с размер n + m - 1.

const size_t ARRAY_MAX_SIZE = 100;
const size_t PRODUCT_MAX_SIZE = 200; // n + m - 1 (при максимум 100 + 100 - 1 = 199)

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void printPolynomial(const int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void multiplyPolynomials(const int a[], int n, const int b[], int m, int result[], size_t &resultSize) {
    resultSize = n + m - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i + j] += a[i] * b[j];
        }
    }
}

int main() {
    unsigned n, m;

    do {
        std::cout << "Enter size of first polynomial n (1-100):\n";
        std::cin >> n;
    } while (n < 1 || n > 100);

    int a[ARRAY_MAX_SIZE];
    std::cout << "Enter " << n << " coefficients for polynomial a:\n";
    getArray(a, n);

    do {
        std::cout << "Enter size of second polynomial m (1-100):\n";
        std::cin >> m;
    } while (m < 1 || m > 100);

    int b[ARRAY_MAX_SIZE];
    std::cout << "Enter " << m << " coefficients for polynomial b:\n";
    getArray(b, m);

    int result[PRODUCT_MAX_SIZE]{0};
    size_t resultSize = 0;

    multiplyPolynomials(a, n, b, m, result, resultSize);

    std::cout << "Product polynomial coefficients:\n";
    printPolynomial(result, resultSize);
}
