#include <iostream>


int main() 
{
    int num = 10;
    bool msg = true;

    if (num == 1)
        if (msg == true)
            std::cout << "complete" << std::endl;
    else
        std::cout << "not complete" << std::endl;

    return 0;
}