#include <iostream>

// Въведете произволен 8-цифрен код. 
// Отпечатайте само последните 3 цифри, а останалите заменете със *.

int main()
{
    unsigned long long code;

    std::cout << "Enter code:\n";
    std::cin >> code;

    unsigned lastThreeDigits = code % 1000;

    std::cout << "*****" << lastThreeDigits;
}
