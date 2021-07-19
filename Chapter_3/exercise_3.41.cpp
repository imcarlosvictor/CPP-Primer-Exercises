#include <iostream>
#include <vector>


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::vector<int> vect_arr(std::begin(arr), std::end(arr));

    return 0;
}