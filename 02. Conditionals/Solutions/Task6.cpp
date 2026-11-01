#include <iostream>

/*
Въведете две положителни двуцифрени числа. 
Създайте ново число, като долепите второто след първото. 
Изведете полученото число и `YES`, ако цифрите му образуват **строго нарастваща** редица 
(всяка цифра е поне с 1 по-голяма от предходната), или `NO` в противен случай.
*/

int main() {
    unsigned num1, num2;
    std::cout << "Enter two numbers between 10 and 99:\n";
    std::cin >> num1 >> num2;


    if (num1 < 10 || num1 > 99 || num2 < 10 || num2 > 99) {
        std::cout << "Invalid input!" << "\n";
    }
    else
    {

    unsigned combined = num1 * 100 + num2; 
    std::cout << "New number: " << combined << "\n";
    
    unsigned units = combined % 10;
    unsigned tens = (combined /10 ) % 10;
    unsigned hundreds = (combined / 100 ) % 10;
    unsigned thousands = combined / 1000;
    
    bool isIncreasing = thousands < hundreds && hundreds < tens && tens < units;

    std::cout << "Is increasing: " << (isIncreasing ? "Yes" : "No") << "\n";
    }
}
