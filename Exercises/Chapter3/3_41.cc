#include <iostream>
#include <vector>

int main() {
    int arr[] = {0, 1, 2, 3};
    std::vector<int> v(std::begin(arr), std::end(arr));

    std::cout << "Vector : ";
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl << "arr : ";

    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}