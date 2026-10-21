#include <iostream>

/*
Въведете два интервала: [a; b] и [c; d].

Изведете:

true, ако се пресичат
false, ако не се пресичат
*/

int main()
{
	double a, b, c, d;
	
	std::cout<< "Enter four numbers:\n";
	std::cin >> a >> b >> c >> d;

	bool areCrossing = (b >= c) && (a <= d);
	std::cout << "Are the intervals crossing: " << std::boolalpha << areCrossing;
}
