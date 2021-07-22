#include <iostream>
#include "Chapter6.h"

using namespace std;

int count()
{
    static int counter;
    return ++counter;
}

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        cout << count() << endl;
    }

    return 0;
}