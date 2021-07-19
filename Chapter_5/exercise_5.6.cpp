#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int grades[] = {30, 50, 70, 80, 90};

    string lettergrade;
    for (int i = 0; i < 5; ++i)
    {
        lettergrade = (grades[i] < 50) ? "Fail"
                    : (grades[i] >= 50 && grades[i] < 60) ? "D"
                    : (grades[i] >= 60 && grades[i] < 70) ? "C"
                    : (grades[i] >= 70 && grades[i] < 80) ? "B"
                    : (grades[i] >= 80 && grades[i] < 90) ? "A" : "A++";

        cout << grades[i] << " " << lettergrade << endl;
    }

    return 0;
}