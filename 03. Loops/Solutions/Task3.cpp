#include <iostream>

// Едно естествено число е перфектно, ако е равно на сумата от своите собствени делители (всички делители без самото число).
// Проверете дали въведено число N е перфектно.

int main() {
    unsigned number;
    std::cout << "Enter number: ";
    std::cin >> number;

    unsigned sum = 0;

    // Обхождаме числата от 1 до n / 2, тъй като най-големият 
    // собствен делител на едно число не може да надвишава половината му.
    for (unsigned i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Проверяваме дали сумата на делителите е равна на самото число
    if (sum == number) {
        std::cout << number << " is perfect number\n";
    } else {
        std::cout << number << " is not perfect number\n";
    }
}
