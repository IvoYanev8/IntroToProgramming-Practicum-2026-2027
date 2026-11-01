#include <iostream>
#include <cmath>

/*
Въведете три реални числа – страни на триъгълник. Ако не образуват триъгълник, изведете Not a triangle. 
В противен случай класифицирайте триъгълника:

по страни: Equilateral (равностранен), Isosceles (равнобедрен) или Scalene (разностранен);
по ъгли: Right (правоъгълен), Acute (остроъгълен) или Obtuse (тъпоъгълен).
*/

const double EPSILON = 0.00000001;

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    if ((a <= 0 || b <= 0 || c <= 0) || (a + b <= c || a + c <= b || b + c <= a)) {
        std::cout << "Not a triangle\n";
    } else {

    if (std::abs(a - b) <  EPSILON && std::abs(b - c) < EPSILON) {
        std::cout << "Equilateral\n";
    } else if (std::abs(a - b) < EPSILON || std::abs(b - c) < EPSILON || std::abs(a - c) < EPSILON) {
        std::cout << "Isosceles\n";
    } else {
        std::cout << "Scalene\n";
    }

    double longest = a;
    double other1 = b;
    double other2 = c;

    if (b > longest) {
        longest = b;
        other1 = a;
        other2 = c;
    }
    if (c > longest) {
        longest = c;
        other1 = a;
        other2 = b;
    }

    double sumSquares = other1 * other1 + other2 * other2;
    double maxSquare = longest * longest;

    if (std::abs(sumSquares - maxSquare) < EPSILON) {
        std::cout << "Right\n";
    } else if (sumSquares > maxSquare) {
        std::cout << "Acute\n";
    } else {
        std::cout << "Obtuse\n";
    }
  }
}
