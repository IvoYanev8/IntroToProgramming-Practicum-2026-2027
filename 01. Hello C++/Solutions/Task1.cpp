#include <iostream>

/*
Създайте програма, която:

Отпечатва Hello, C++.

Въвежда три цели числа:
 - брой ябълки 🍎
 - брой круши 🍐
 - брой банани 🍌
Извежда:
Don’t forget to buy X apples, Y pears and Z bananas!
*/

int main() {

  std::cout << "Hello, C++!\n";
  
  unsigned apples, pears, bananas;
  std::cout <<  "Enter count of apples, pears and bananas:\n";

  std::cin >> apples >> pears >> bananas;
  std::cout << "Don’t forget to buy " << apples << " apples, " 
                                      << pears << " pears and " 
                                      << bananas << " bananas!\n";
  
}
