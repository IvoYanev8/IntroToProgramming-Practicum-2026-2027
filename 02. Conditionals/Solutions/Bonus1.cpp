#include <iostream>

/*
Въведете дата като три цели числа – ден, месец и година. 
Проверете дали датата е валидна (съобразете броя дни в месеца и високосните години). 
Ако е валидна, изведете датата на следващия ден във формат DD.MM.YYYY, в противен случай – Invalid date.
*/

int main() {
    unsigned day, month, year;
    std::cin >> day >> month >> year;
  
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    unsigned maxDays = 0;
    bool isValid = true;

    switch(month) {
        case 2:
            maxDays = isLeap ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            maxDays = 30;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDays = 31;
            break;
        default:
            isValid = false;
            break;
    }
   

    if (!isValid || year < 1 || day < 1 || day > maxDays) {
        std::cout << "Invalid date\n";
    } else {
        day++;
        if (day > maxDays) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }

        if (day < 10) std::cout << '0';
        std::cout << day << '.';

        if (month < 10) std::cout << '0';
        std::cout << month << '.';

        std::cout << year << "\n";
    }

}
