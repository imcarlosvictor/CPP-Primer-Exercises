#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter a series of words: ";

    std::string input;
    std::vector<std::string> words;
    while (std::cin >> input) {
        words.push_back(input);
    }

    return 0;
}
