#include <iostream>

// Въведете число, записано в двоична бройна система, и го преобразувайте в десетична.
// В случая приемаме, че ни е подаден валиден вход и затова не валидираме числото

int main()
{
    std::cout << "Enter binary number:\n";
    
	unsigned long long binaryNum;
	std::cin >> binaryNum;

	unsigned result = 0;
	unsigned base = 1;
  
	while (binaryNum > 0)
	{
		result += (binaryNum % 10) * base;
		base *= 2;
		binaryNum /= 10;
	}
	
	std::cout << result;
}
