#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string s = "Hello world";
    for (int i = 1; i <= s.size(); ++i) {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;

    return 0;
}