#include <iostream>

// При даден месец като цяло число отпечатайте колко дни има в него. Ако месецът е февруари, въведете и година и спрямо нея определете дали има 28 или 29 дни.

int main() {
    unsigned month;
    std::cout << "Enter num for month:\n";
    std::cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout << "31 days" << "\n";
            break;

        case 4: case 6: case 9: case 11:
            std::cout << "30 days" << "\n";
            break;

        case 2: {
            unsigned year;
            std::cout << "Enter year:\n";
            std::cin >> year;

            bool isLeap = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
            std::cout << (isLeap ? "29 days" : "28 days") << "\n";
            break;
        }

        default:
            std::cout << "Invalid input for month!" << "\n";
    }

}
