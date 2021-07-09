#include <iostream>

int main() {
    std::cout << "Enter a number: " << std::endl;

    int n1 = 0, n2 = 0;

    std::cin >> n1 >> n2;

    std::cout << n1 << " + " << n2 << " = " << std::endl;
    std::cout << n1 + n2;

    return 0;
}