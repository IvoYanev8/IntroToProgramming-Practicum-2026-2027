#include <iostream>

// Въведете числител и знаменател. Изведете несъкратимата дроб.

int main() {
    int numerator, denominator;
    
    std::cout << "Enter numerator:\n";
    std::cin >> numerator;
    std::cout << "Enter denominator:\n";
    std::cin >> denominator;

    if (denominator == 0) {
        std::cout << "Denominator must not be zero\n";
    } else if (numerator == 0) {
        std::cout << "0\n";
    } else {
    int sign = 1;
    if (numerator < 0) {
        sign = -sign;
        numerator = -numerator;
    }
    if (denominator < 0) {
        sign = -sign;
        denominator = -denominator;
    }

    unsigned a = numerator;
    unsigned b = denominator;
    while (b != 0) {
        unsigned temp = b;
        b = a % b;
        a = temp;
    }
    unsigned gcd = a;

    numerator /= gcd;
    denominator /= gcd;

    std::cout << "Result: ";
    if (sign == -1) {
        std::cout << "-";
    }
    
    std::cout << numerator << "/" << denominator << "\n";
    }
}
