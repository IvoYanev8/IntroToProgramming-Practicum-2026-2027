#include <iostream>
/*
За дадено положително число N повтаряйте:

Ако N е…	Тогава
четно	N = N / 2
нечетно	N = 3 * N + 1
Процесът спира, когато N стане 1.

Отпечатайте редицата, броя стъпки и най-голямата достигната стойност.
*/

int main() {
    unsigned n;
    std::cout << "Enter positive number ";
    std::cin >> n;

    unsigned maxVal = n; 
    unsigned steps = 0;        

    std::cout << "Sequence: " << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;     
        } else {
            n = 3 * n + 1; 
        }

        steps++; 

        if (n > maxVal) {
            maxVal = n;
        }

        std::cout << n << " ";
    }

    std::cout << "\n";
    std::cout << "Steps: " << steps << "\n";
    std::cout << "Biggest value: " << maxVal << "\n";
}
