#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    do {
        // Ask for 2 string inputs
        // Determine which string is less than the other (length-wise)
        cout << "Enter string 1: ";
        getline(cin, s1);
        cout << "Enter string 2: ";
        getline(cin, s2);

        // Return output
        cout << "String 1 length: " << s1.size() << endl;
        cout << "String 2 length: " << s2.size() << endl;
    } while (s1.size() == s2.size());

    
    return 0;
}
