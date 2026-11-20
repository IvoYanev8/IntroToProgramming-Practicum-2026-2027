#include <iostream>

// Въведете n (1 ≤ n ≤ 256) и масив от n цели числа.
// Инверсия има, когато за два елемента с индекси i, j (0 ≤ i < j < n) е изпълнено arr[i] > arr[j].
// Напишете функция, която приема масив и връща броя на инверсиите.

const size_t SIZE_OF_ARRAY = 256;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void countInversionsForPosition(const int arr[], size_t size, size_t pos, size_t& inversionsCount) {
    for (size_t j = pos + 1; j < size; ++j) {
        if (arr[pos] > arr[j]) {
            inversionsCount++;
        }
    }
}

int getInversions(const int arr[], size_t size)
{
    size_t inversionCount = 0;
    for (size_t i = 0; i < size; i++)
    {
       countInversionsForPosition(arr, size, i, inversionCount);
    }
    return inversionCount;
}

int main()
{
    unsigned countOfElements;

    do {
        std::cout << "Enter array size: ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

    getArray(arr, countOfElements);
   
    std::cout << getInversions(arr, countOfElements);
}
