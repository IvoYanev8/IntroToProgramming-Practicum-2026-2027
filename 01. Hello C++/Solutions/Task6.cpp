#include <iostream>

/*
Въведете положително трицифрено число и изведете:

единиците
десетиците
стотиците
тяхната сума
*/

int main()
{
    unsigned num;

    std::cout << "Enter number:\n";
    std::cin >> num;

    short units = num % 10;
    short tens = (num / 10) % 10;
    short hundreds = num / 100;

    std::cout << "units: " << units << "\n";
    std::cout << "tens: " << tens << "\n";
    std::cout << "hundreds: " << hundreds << "\n";

    short sum = units + tens + hundreds;

    std::cout << "sum: " << sum << "\n";
}
