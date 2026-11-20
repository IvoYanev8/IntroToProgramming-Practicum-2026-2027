#include <iostream>

// Въведете n (1 ≤ n ≤ 64) и масив от n цели числа. Напишете функция, която проверява дали масив с размер най-много 256 
// елемента е конкатенация на два палиндромни масива.

const size_t ARRAY_MAX_SIZE = 64;

void getArray(int arr[], size_t size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cin >> arr[i];
    }
}

bool isPalindrome(const int arr[], unsigned start, unsigned end)
{
    while (start < end)
    {
        if (arr[start] != arr[end])
            return false;
        start++;
        end--;
    }
    return true;
}

bool isConcatenationOfPalindromes(const int arr[], size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (isPalindrome(arr, 0, i) &&
            isPalindrome(arr, i + 1, size - 1))
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    int arr[MAX];
    unsigned n;

     do {
        std::cout << "Enter array size (1-64): \n";
        std::cin >> n;
    } while (n < 1 || n > ARRAY_MAX_SIZE);


    std::cin >> n;
    getArray(arr, n);

    std::cout << std::boolalpha
              << isConcatenationOfPalindromes(arr, n);
}
