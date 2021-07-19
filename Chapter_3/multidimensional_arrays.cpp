#include <iostream>


int main () 
{
    int arr[][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Loop through outer array
    for (int r = 0; r < 3; ++r) 
    {
        // Loop through inner array
        for (int c = 0; c < 3; ++c) 
        {
            std::cout << arr[r][c] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}