#include <iostream>

// Въведете три положителни числа `a`, `b`, `c` – страни на триъгълник. Проверете дали от тях може да се образува валиден триъгълник. Ако да, изведете `yes`, в противен случай – `no`.

int main() {
    double firstSide, secondSide, thirdSide;
    std::cout << "Enter triangle sides:\n";
    std::cin >> firstSide >> secondSide >> thirdSide;
    
    if( firstSide <= 0 || secondSide <= 0 || thirdSide <= 0)
    {
        std::cout << "Invalid input!";
    } else { 

    bool isTriangle = ((firstSide + secondSide > thirdSide)
                       && (firstSide + thirdSide > secondSide) 
                       && (secondSide + thirdSide > firstSide));

    std::cout << "Is triangle: " << (isTriangle ? "Yes" : "No") << "\n";
    }
}
