#include <iostream>

/* 
    Въведете 2 цели числя и изведете по-голямото от тях.
   ⛔ Забранено: if
*/

int main() {
    int firstNum, secondNum;
    
    std::cout<< "Enter first number:\n";
    std::cin >> firstNum;

    std::cout<< "Enter second number:\n";
    std::cin >> secondNum;

    std::cout << "Bigger num: " << 
        (firstNum-secondNum<0)*secondNum + (secondNum-firstNum<0)*firstNum << "\n";
}
