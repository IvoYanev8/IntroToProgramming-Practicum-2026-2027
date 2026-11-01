#include <iostream>

/*
Въведете цяло число, представляващо година. Ако годината е високосна, изведете `yes`, в противен случай – `no`.

Годината е високосна, ако се дели на 4, но не се дели на 100, **или** ако се дели на 400.
*/

int main() 
{
    unsigned year;
    std::cout << "Enter year:\n";
    std::cin >> year;

    bool isLeap = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );

    std::cout << "Is leap year: " << (isLeap ? "Yes" : "No") << "\n";
}
