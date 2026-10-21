#include <iostream>

/*
Въведете две естествени двуцифрени числа a и b и изведете:

произведението им
последната цифра на произведението
дали последната цифра е нечетна
*/

int main()
{
    unsigned firstNum, secondNum;

    std::cout << "Enter two 2-digit nums:\n";
    std::cin >> firstNum >> secondNum;

    unsigned multiplyResult = firstNum * secondNum;
    unsigned lastDigit = multiplyResult % 10;
    bool isEven = lastDigit % 2 == 0;

    std::cout << "Prod: " << multiplyResult << "\n";
    std::cout << "Last digit: " << lastDigit << "\n";
    std::cout << "Is even: " << std::boolalpha << isEven << "\n";
}
