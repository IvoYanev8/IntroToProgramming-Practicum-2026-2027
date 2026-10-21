#include <iostream>

// Въведете две реални числа: дължина и широчина на правоъгълник. Изведете неговата обиколка и лице.

int main()
{
    // приемаме, че са положителни :), валидациите другата седмица
    double width, height;

    std::cout << "Enter width:\n";
    std::cin >> width;

    std::cout << "Enter height:\n";
    std::cin >> height;

    double perimeter = 2 * (width + height);
    double area = width * height;

    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";
}
