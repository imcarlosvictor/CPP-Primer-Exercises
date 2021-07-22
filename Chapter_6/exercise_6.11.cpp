#include <iostream>

using namespace std;


void reset(int &v1)
{
    v1 = 10;
}

int main()
{
    int a = 1;

    cout << "a: " << a << endl;
    reset(a);
    cout << "a: " << a << endl;

    return 0;
}