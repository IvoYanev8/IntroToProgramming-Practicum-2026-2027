#include <iostream>

// В равнината има n точки. Координатите им са дадени в два масива, x[] и y[], с размер n.
// Напишете функция, която обхожда всички възможни двойки точки и връща максималното Манхатънско разстояние

const size_t ARRAY_MAX_SIZE = 100;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

int myAbs(int val) {
    if (val < 0) {
        return -val;
    }
    return val;
}

long long manhattanDistanceBetweenPoints(const int x[], const int y[], size_t idx1, size_t idx2) {
    int dx = x[idx1] - x[idx2];
    int dy = y[idx1] - y[idx2];
    return myAbs(dx) + myAbs(dy);
}

int maxManhattanDistance(const int x[], const int y[], size_t n) {
    int maxDist = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int currentDist = manhattanDistanceBetweenPoints(x, y, i, j);
            
            if (currentDist > maxDist) {
                maxDist = currentDist;
            }
        }
    }
    
    return maxDist;
}

int main() {
    unsigned n;

    do {
        std::cout << "Enter number of points (1-100):\n";
        std::cin >> n;
    } while (n < 1 || n > 100);

    int x[ARRAY_MAX_SIZE];
    int y[ARRAY_MAX_SIZE];

    std::cout << "Enter " << n << " X coordinates:\n";
    getArray(x, n);

    std::cout << "Enter " << n << " Y coordinates:\n";
    getArray(y, n);

    int result = maxManhattanDistance(x, y, n);

    std::cout << "Max Manhattan distance = " << result << "\n";
}
