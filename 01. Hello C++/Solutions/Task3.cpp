#include <iostream>

/*
Въведете сума в евро и изчислете:

Валута	Курс
💵 долари	1 € = 1.1 $
💴 йени	1 € = 145 ¥
📌 Изискване: курсовете трябва да бъдат константи (const).
*/

const double EURO_YENI = 1.1;
const double EURO_DOLLARS = 145;

int main()
{
    double euro;

    std::cout << "Enter money in euro: ";
    std::cin >> euro;

    std::cout << "Yeni: " << euro * EURO_YENI << "\n" ;
    std::cout << "Dollars: " << euro * EURO_DOLLARS << "\n";
}
