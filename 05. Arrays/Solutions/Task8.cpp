#include <iostream>

// n ученици (1 ≤ n ≤ 128) стоят в редица, подредени по ръст във възходящ ред. Височините им са дадени в масив. Идва нов ученик с ръст x.
// Напишете функция, която връща индекса, на който трябва да застане новият ученик, така че редицата да остане подредена. 
// Ако има ученик със същия ръст, новият застава преди него.

const size_t ARRAY_MAX_SIZE = 128;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

int findInsertionIndex(const int arr[], size_t n, int x) {
    int left = 0;
    int right = n;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] >= x) {
            right = mid; 
        } else {
            left = mid + 1; 
        }
    }
    
    return left;
}

int main() {
    unsigned n;

    do {
        std::cout << "Enter number of students n (1-128):\n";
        std::cin >> n;
    } while (n < 1 || n > 128);

    int arr[ARRAY_MAX_SIZE];

    std::cout << "Enter " << n << " sorted heights:\n";
    getArray(arr, n);

    int x;
    std::cout << "Enter new student height x:\n";
    std::cin >> x;

    int index = findInsertionIndex(arr, n, x);

    std::cout << "Insertion index = " << index << "\n";
}
