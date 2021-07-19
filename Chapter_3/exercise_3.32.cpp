#include <iostream>
#include <vector>


int main() {
    std::vector<int> list(10);

    int i = 1;
    for (int el : list) {
        list[el] = i;
        std::cout << list[el] << std::endl;
        ++i;
    }

    
    return 0;
}