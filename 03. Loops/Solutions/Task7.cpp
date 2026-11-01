#include <iostream>

/*
Числото N е автоморфно, ако квадратът му N² завършва на самото число N.

Проверете дали въведено естествено число N е автоморфно.

💡 Пример: 25² = 625, а 625 завършва на 25.
*/

int main() {
    unsigned number;
    std::cout << "Enter number\n";
    std::cin >> number;

    long square = number * number;
    unsigned temp = number;
    long divider = 1;

    // Намираме колко десетични позиции (цифри) има числото N,
    // за да знаем на колко трябва да делиме квадрата му.
    // Например за 25 divider ще стане 100.
    while (temp > 0) {
        divider *= 10;
        temp /= 10;
    }

    // Проверяваме дали остатъкът от делението на квадрата на divider е равен на N
    if (square % divider == number) {
        std::cout << number << " is automorphic number (" << number << "^2 = " << square << ")\n";
    } else {
        std::cout << number << " is not automorphic number (" << number << "^2 = " << square << ")\n";
    }
}
