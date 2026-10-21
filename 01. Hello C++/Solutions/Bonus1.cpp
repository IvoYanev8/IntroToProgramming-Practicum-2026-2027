#include <iostream>

/*
Въведете четирицифрено число.

Изведете:

true, ако е палиндром
false, ако не е

*/

int main() {
    unsigned number;
    
    std::cout<< "Enter 4-digit number:\n";
    std::cin >> number;

    short units  = number % 10;       
    short tens = (number / 10) % 10; 
    short hundreds = (number / 100) % 10;  
    short thousands = number / 1000;       

    bool isPalindrome = (units == thousands) && (tens == hundreds);
    std::cout << "Is palindrome: "<< std::boolalpha << isPalindrome << "\n";
}
