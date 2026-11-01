#include <iostream>

// Въведете число N. На следващите N - 1 реда се въвеждат всички числа от 1 до N без едно.
// Изведете пропуснатото число.

int main()
{
    std::cout << "Enter number:\n";
    unsigned number;
    std::cin >> number;

    unsigned res = number * (number + 1) / 2; // сумата на всички числа от 1 до N

    std::cout << "Enter " << number - 1 << " numbers:\n";
    for (unsigned i = 0; i < number - 1; i++)
    {
        unsigned currentNum;
        std::cin >> currentNum;
        res-=currentNum;
    }

    std::cout << "The missing number is: " << res << "\n";
}
