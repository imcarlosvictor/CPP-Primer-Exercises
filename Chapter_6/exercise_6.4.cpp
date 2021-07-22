#include <iostream>
#include <string>
#include "Chapter6.h"

using namespace std;

int fact(int num)
{
    int result = 1;
    for (int i = 2; i <= num; ++i)
    {
        result *= i; 
    }
    return result;
}

int main() {

    auto answer = fact(5);
    cout << answer << endl;

    return 0;
}