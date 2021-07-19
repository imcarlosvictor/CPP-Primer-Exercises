#include <iostream>
#include <string>

using namespace std;

int main() 
{
    const int grades[5]= {30, 50, 70, 80, 90};

    string lettergrade;
    for (int i = 0; i < 5; ++i) 
    {
        // Passing grades
        if (grades[i] >= 50 && grades[i] < 60) 
        {
            cout << grades[i] << " .. D" << endl;
        }
        else if (grades[i] >= 60 && grades[i] < 70)
        {
            cout << grades[i] << " .. C" << endl;
        }
        else if (grades[i] >= 70 && grades[i] < 80)
        {
            cout << grades[i] << " .. B" << endl;
        }
        else if (grades[i] >= 80 && grades[i] < 90)
        {
            cout << grades[i] << " .. A" << endl;
        }
        else if (grades[i] >= 90 && grades[i] <= 100)
        {
            cout << grades[i] << " .. A++" << endl;
        }
        // Failing grade
        else
        {
            cout << grades[i] << " .. F" << endl;
        }
    }

    return 0;
}
