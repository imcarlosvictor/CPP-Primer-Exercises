#include <iostream>

int main() {
    int sum = 50, val = 1;
    while (sum <= 100) {
        sum = sum + val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
    << sum << std::endl;

    return 0;
}