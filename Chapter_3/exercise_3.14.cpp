#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    // User Input
    cout << "Enter a series of numbers: ";

    int number;
    vector<int> inputs; // Initialize empty vector
    while (cin >> number) {
        // Append number to vector
        inputs.push_back(number);
    }

    return 0;
}