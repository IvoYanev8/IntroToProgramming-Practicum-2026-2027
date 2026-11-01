#include <iostream>

// Въведете естествено число n и изведете всички естествени решения на уравнението x + y = n.

int main()
{
    std::cout << "Enter number: ";
    unsigned number;
    std::cin >> number;

    std::cout << "All natural solutions (x, y) for x + y = " << number << " are:\n"

    for (unsigned x = 1; x < number; x++)
    {
        unsigned y = number - x;
        std::cout << "x = " << x << " y = " << y << "\n";
    }
}
