#include <iostream>

const int MIN_VALUE = 5;
const int MAX_VALUE = 10;
const int SOME_CONST = 42;

int main() {
    int x = 5;
    int *ptr = nullptr;

    if (ptr[10000] == 42) {
        std::cout << "0\n";
    }

    if (ptr != NULL) {
        std::cout << "0\n";
    }

    if ((x < MAX_VALUE) && (x > MIN_VALUE)) {
        std::cout << "1\n";
    }

    if ((x < 10) && (x > 5)) {
        std::cout << "2\n";
    }

    if ((x < 10) && (x < 5)) {
        std::cout << "3\n";
    }

    if ((x < 10) & (x > 5)) {
        std::cout << "4\n";
    }

    if (x | 3) {
        std::cout << "5\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i < -1000) {
            std::cout << "6\n";
        }
        if (i > 1000) {
            std::cout << "7\n";
        }
    }

    for (int i = 0; i < 10; i++) {
        i++;
        if ((SOME_CONST != 10) && (SOME_CONST == 11)) {
            std::cout << "8\n";
        }
        if ((SOME_CONST != 10) && (SOME_CONST == 10)) {
            std::cout << "9\n";
        }
    }

    int z;
    if ((z > 0) && (z < 0)) {
        std::cout << "10\n";
    }

    if (NULL == ptr == NULL) {
        std::cout << "11\n";
    }

    return 0;
}
