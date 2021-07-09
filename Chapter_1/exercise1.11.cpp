#include <iostream>

int main() {
    std::cout << "Enter two numbers: " << std::endl;
    int low = 0, high = 0;
    std::cin >> low >> high;
    
    int i = low, j = 1;
    // Print all numbers between low and high
    while (i <= high) {
        std::cout << i << std::endl;
        i = i + j;
    }

    return 0;
}