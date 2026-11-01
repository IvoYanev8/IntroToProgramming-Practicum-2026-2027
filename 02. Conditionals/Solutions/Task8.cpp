#include <iostream>

/*
Напишете програма, която отпечатва меню и според избора на потребителя изпълнява съответната операция върху две цели числа a и b.

1. Събиране
2. Изваждане
3. Умножение
4. Деление
5. Остатък при деление
Избор:
Въвеждат се изборът и двете числа. Изисквания:

При деление и остатък, ако b == 0, изведете Division by zero.
При невалиден избор изведете Invalid option (използвайте default).
*/

int main() {
    int a, b;
    std::cout << "Enter two whole numbers:\n";
    std::cin >> a >> b;
    
    unsigned short operation;
    std::cout << "1. Addition\n"
              << "2. Subtraction\n"
              << "3. Multiplication\n"
              << "4. Division\n"
              << "5. Remainder of division\n"
              << "Choice:\n";
    std::cin >> operation;
    
    switch (operation) {
        case 1:
            std::cout << "a + b = " << a + b << "\n";
            break;
        case 2:
            std::cout << "a - b = " << a - b << "\n";
            break;
        case 3: 
            std::cout << "a * b = " << a * b << "\n";
            break;
        case 4:
            if (b == 0) {
                std::cout << "Division by zero\n";
            } else {
                std::cout << "a / b = " << a / b << "\n";
            }
            break;
        case 5: 
            if (b == 0) {
                std::cout << "Division by zero\n";
            } else {
                std::cout << "a % b = " << a % b << "\n";
            }
            break;
        default:
            std::cout << "Invalid option\n";
            break;
    }
    
}
