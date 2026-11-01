#include <iostream>

// Въведете естествено число и изведете най-често срещаната цифра в него.
// Ако има няколко такива цифри, изведете по-голямата.

int main()
{
  std::cout << "Enter number:\n";
	unsigned long number;
	std::cin >> number;

	unsigned maxOcc = 0;
	unsigned maxOccDigit = 0;
	for (int i = 9; i >= 0; i--)
	{
		unsigned copyOfNum = number;
		unsigned occOfDigit = 0;
		while (copyOfNum > 0)
		{
			if (copyOfNum % 10 == i)
			{
				occOfDigit++;
			}
			copyOfNum /= 10;
		}

		if (occOfDigit > maxOcc)
		{
			maxOcc = occOfDigit;
			maxOccDigit = i;
		}
	}
  
	std::cout << maxOccDigit;
}
