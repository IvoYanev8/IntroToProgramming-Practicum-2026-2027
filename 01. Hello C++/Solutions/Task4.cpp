#include <iostream>

// Въведете две цели числа. Проверете дали първото е делител на второто и изведете true или false.

int main() {
    int first, second;
    
    std::cout<< "Enter two numbers: " << "\n";
    std::cin >> first >> second;

    bool isDivisor = first != 0 && second % first == 0;

    std::cout << "Is divisor: " << std::boolalpha << isDivisor << "\n";
}
