#include <iostream>

/* Въведете брой секунди и ги преобразувайте в:
дни · часове · минути · секунди
*/

const int SECONDS_IN_DAY = 86400;
const int SECONDS_IN_HOUR = 3600;
const int SECONDS_IN_MINUTE = 60;

int main() {
    unsigned totalSeconds;
    
    std::cout<< "Enter time in seconds:\n";
    std::cin >> totalSeconds;

    unsigned days = totalSeconds / SECONDS_IN_DAY;
    unsigned hours = (totalSeconds % SECONDS_IN_DAY) / SECONDS_IN_HOUR;
    unsigned minutes = (totalSeconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
    unsigned seconds = totalSeconds % SECONDS_IN_MINUTE;

    std::cout << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds\n";
}
