#include <iostream>
#include <string>


int main() 
{
    std::cout << "Enter a word: ";
    
    // Input
    std::string sentence;
    std::getline(std::cin, sentence);

    int vowels = 0;
    for (char c : sentence)
    {
        switch (c) 
        {
            case 'a':
                ++vowels;
                break;
            case 'e':
                ++vowels;
                break;
            case 'i':
                ++vowels;
                break;
            case 'o':
                ++vowels;
                break;
            case 'u':
                ++vowels;
                break;
        }
    }

    std::cout << vowels << std::endl;

    return 0;
}
