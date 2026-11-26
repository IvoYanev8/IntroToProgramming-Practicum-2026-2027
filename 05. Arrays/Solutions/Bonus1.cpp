#include <cstddef>
#include <iostream>

// Въведете n (1 <= n <= 128) и масив от n цифри. Напишете функция, която връща компресираната версия на масива като число.
// За всяка поредица от еднакви последователни цифри се записва първо цифрата, а след това колко пъти се повтаря.

const size_t MAX_SIZE = 128;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

unsigned long long appendPair(unsigned long long number, unsigned long long digit, unsigned long long count) {
    number = number * 10 + digit;
    return number * 10 + count;
}

unsigned long long compressToNumber(const int arr[], size_t size) {

    unsigned long long result = 0;
    int current = arr[0];
    unsigned long long count = 1;

    for (size_t i = 1; i < size; ++i) {
        if (arr[i] == current) {
            ++count;
        } else {
            result = appendPair(result, current, count);
            current = arr[i];
            count = 1;
        }
    }

    result = appendPair(result, current, count);
    return result;
}

int main() {
    size_t n = 0;
    do {
        std::cout << "Enter n (1 <= n <= " << MAX_SIZE << "): ";
        std::cin >> n;
    } while (n < 1 || n > MAX_SIZE);

    int arr[MAX_SIZE];
    getArray(arr, n);

    std::cout << compressToNumber(arr, n) << "\n";
}
