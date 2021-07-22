#include <iostream>

using namespace std;

void switch_value(int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    int *a_ptr = &a;
    int *b_ptr = &b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    switch_value(a_ptr, b_ptr);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}