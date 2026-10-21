#include <iostream>

/* 
Въведете цяло число и изведете абсолютната му стойност.
⛔ Забранено: if · std::abs
*/

int main() {
    int num;
    
    std::cout<< "Enter number:\n";
    std::cin >> num;

    std::cout << "Abs of number: " << (num>0)*num + (num<0)*(-num) << "\n";
}
