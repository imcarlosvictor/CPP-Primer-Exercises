#include <iostream>
#include <string>

using namespace std;

int main() 
{
    cout << "Enter a word: ";

    // Input
    string word;
    getline(cin, word);


    // Convert uppercase letters to lowercase
    for (char &c : word)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
    }

    // Count vowel instances
    int a_count = 0;
    int e_count = 0;
    int i_count = 0;
    int o_count = 0;
    int u_count = 0;

    // Count all vowel instances
    for (char c : word)
    {
        switch (c)
        {
            case 'a':
                ++a_count;
                break;
            case 'e':
                ++e_count;
                break;
            case 'i':
                ++i_count;
                break;
            case 'o':
                ++o_count;
                break;
            case 'u':
                ++u_count;
                break;
        }
    }

    cout << "a: " << a_count << endl;
    cout << "e: " << e_count << endl;
    cout << "i: " << i_count << endl;
    cout << "o: " << o_count << endl;
    cout << "u: " << u_count << endl;


    return 0;
}