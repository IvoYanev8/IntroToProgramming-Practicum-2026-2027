#include <iostream>

/*
Въведете изминатите километри и изчислете цената.

🧾 Тарифа	Цена
първите 5 км	2.50 лв./км
следващите километри	1.50 лв./км
при сума над 20 лв.	+10%
такса за заявка (винаги)	+3 лв.
⛔ Забранено: if · switch · тернарен оператор
*/

   const double BASE_FARE = 2.50;
   const double EXTRA_FARE = 1.50;
   const double REQUEST_FARE = 3.0;
   const double EVENING_FARE = 0.10;

int main()
{
    unsigned kilometers;
    
    std::cout<< "Enter kilometers:\n";
    std::cin >> kilometers;

    double kmPrice = ((kilometers <= 5) * kilometers * BASE_FARE) + 
                     ((kilometers > 5) * ((kilometers - 5) * EXTRA_FARE + 
                     5 * BASE_FARE));
    double total = ((kmPrice > 20) * (kmPrice * EVENING_FARE)) + 
                   kmPrice + 
                   REQUEST_FARE;

    std::cout << "Price: " << total;
}
