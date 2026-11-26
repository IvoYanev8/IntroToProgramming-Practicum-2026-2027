#include <iostream>

// Въведете n (1 ≤ n ≤ 100) и масив от n цели числа. Напишете функции, които:
// връщат средното аритметично на елементите;
// връщат колко елемента са строго по-големи от средното.

const size_t ARRAY_MAX_SIZE = 100;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

double getAverage(const int arr[], size_t size) {
    if (size == 0) {
        return 0.0;
    }
    
    long long sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return (1.0 * sum) / size;
}

unsigned countGreaterThanAverage(const int arr[], size_t size, double average) {
    if (size == 0) {
        return 0;
    }

    unsigned count = 0;

    for (size_t i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    return count;
}

int main() {
    unsigned n;

    do {
        std::cout << "Enter array size (1-100): \n";
        std::cin >> n;
    } while (n < 1 || n > ARRAY_MAX_SIZE);

    int arr[ARRAY_MAX_SIZE];

    std::cout << "Enter " << n << " elements: \n";
    getArray(arr, n);

    double average = getAverage(arr, n);
    unsigned greaterCount = countGreaterThanAverage(arr, n, average);

    std::cout << "Average: " << average << "\n";
    std::cout << "Count of elements strictly greater than average: " << greaterCount << "\n";
}
