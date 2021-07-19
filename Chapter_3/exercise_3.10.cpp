#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Enter a series of characters and punctuations: " << endl;

    // Take user input
    string input;
    cin >> input;

    // Iterate through input and append alphabetic characters
    // to new variable
    string letters;
    for (int i = 0; i <= input.size(); ++i) {
        if (isalpha(input[i])) {
            letters += input[i];
        }
    }

    // Print result
    cout << letters << endl;

    return 0;
}