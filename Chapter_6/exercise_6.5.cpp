#include <iostream>
#include <math.h>
#include "Chapter6.h"

using namespace std;

void get_absolute(signed int num)
{
    double answer = abs(num);
    cout << answer << endl;
}

 
int main()
{
    signed int num;
    cout << "Enter a number: ";
    cin >> num;

    get_absolute(num);

    return 0;
}