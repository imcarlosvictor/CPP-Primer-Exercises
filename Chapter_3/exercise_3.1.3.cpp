#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Enter 2 numbers: " << endl;
    int start = 0, end = 0;
    cin >> start >> end;

    while (start <= end) {
        cout << start << endl;
        ++start;
    }

    return 0;
}