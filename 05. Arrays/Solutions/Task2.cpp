#include <iostream>

// Напишете функция long long scalarProduct(int a[], int b[], int n), която изчислява скаларното произведение на два вектора с размер n.

const size_t ARRAY_MAX_SIZE = 100;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

long long scalarProduct(const int a[], const int b[], size_t size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    unsigned n;

    do {
        std::cout << "Enter vectors size (1-100):\n";
        std::cin >> n;
    } while (n < 1 || n > 100);

    int a[ARRAY_MAX_SIZE];
    int b[ARRAY_MAX_SIZE];

    std::cout << "Enter " << n << " elements for vector a:\n";
    getArray(a, n);

    std::cout << "Enter " << n << " elements for vector b:\n";
    getArray(b, n);

    long long result = scalarProduct(a, b, n);

    std::cout << "Scalar product (a * b) = " << result << "\n";
}
