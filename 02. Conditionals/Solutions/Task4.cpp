#include <iostream>

// По въведени координати `x` и `y` на точка `A(x, y)` определете в кой квадрант на координатната система лежи тя. Ако точката лежи на някоя от осите, изведете `On axis`.

int main() {
    double xCoord, yCoord;
    std::cout << "Enter coordinates for point:\n";
    std::cin >> xCoord >> yCoord;

    if (xCoord == 0 && yCoord == 0)
        std::cout << "At (0,0)" << "\n";
    else if (xCoord == 0)
        std::cout << "On Y" << "\n";
    else if (yCoord == 0)
        std::cout << "On X" << "\n";
    else
        std::cout << ((xCoord > 0) ? ((yCoord > 0) ? "First" : "Fourth")
                         : ((yCoord > 0) ? "Second" : "Third"))
             << "\n";
}
