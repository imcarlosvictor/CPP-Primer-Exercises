#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int sum = 50, i = 1;
    while (i <= 50) {
        sum += i;
        ++i;
    }
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;

    return 0;
}