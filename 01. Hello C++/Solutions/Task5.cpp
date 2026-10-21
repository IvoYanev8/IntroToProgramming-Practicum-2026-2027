#include <iostream>

// Въведете три цифри и ги сглобете в трицифрено число.

int main() {
    unsigned first, second, third; 
    
    std::cout<< "Enter three digits:\n";
    std::cin >> first >> second >> third;

    unsigned newNumber = first * 100 + second * 10 + third;

    std::cout << "New number: " << newNumber << "\n";
}
