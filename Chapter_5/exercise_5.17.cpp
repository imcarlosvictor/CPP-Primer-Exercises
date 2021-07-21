#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int number;
    vector<int> v1, v2;

    // INPUT: vector 1
    cout << "Enter 3 numbers for vector 1: ";
    while (v1.size() != 3)
    {
        cin >> number;
        v1.push_back(number);
    }

    // Reset number for next input
    number = 0;

    // INPUT: vector 2
    cout << "Enter 6 numbers for vector 2: ";
    while (v2.size() != 6)
    {
        cin >> number;
        v2.push_back(number);
    }

    // Determine whether vector 1 is a prefix of vector 2
    bool prefix = false;
    for (int i = 0; i < v1.size(); ++i)
    {
        // Take both values and compare
        if (v1[i] == v2[i])
        {
            cout << "match" << endl;
            prefix = true;
        }
        else
        {
            cout << "No match" << endl;
            prefix = false;
        }
    }

    // Return result
    if (prefix)
        cout << "v1 is a prefix of v2" << endl;
    else
        cout << "v1 is NOT a prefix of v2" << endl;

    return 0;
}