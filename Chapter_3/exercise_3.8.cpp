#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main() {
    string s = "Hello world";
    int i = 1;
    while (i <= s.size()) {
        s[i] = toupper(s[i]);
        ++i;
    }
    cout << s << endl;

    return 0;
}