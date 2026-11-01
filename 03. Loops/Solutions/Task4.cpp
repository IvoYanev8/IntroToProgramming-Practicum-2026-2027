#include <iostream>

/*
По дадено число N изведете квадрат от N × N символа, в който:

Позиция	Символ
по главния диагонал	0
над диагонала	+
под диагонала	-
*/

int main()
{
  std::cout << "Enter number:\n";
  
	unsigned number;
	std::cin >> number;
	
	for(unsigned i = 1; i <= number;i++)
	{
	    for(unsigned j=1;j <= number;j++)
	    {
	        if (i < j)
                std::cout << "+";
            else if (i == j)
                std::cout << "0";
            else
                std::cout << "-";
	    }  
	    std::cout<<"\n";
	}
}
