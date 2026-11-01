#include <iostream>

// Въведете две цели числа a и b. Използвайте тернарния оператор ?:, за да определите и отпечатате по-малкото от тях.

int main()
{
  std::cout << "Enter two numbers: ";
  
  int firstNum, secondNum;
  std::cin >> firstNum >> secondNum;

  std::cout << "The lower number is: ";
  std::cout << (firstNum <= secondNum ? firstNum : secondNum);
}
