#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5, 6};

    std::cout << "The Vector is : ";
    for (auto i : a) {
        std::cout << i << " ";
    }
    std::cout << "\nThe Odd Number is : ";
    for (auto i : a) {
        std::cout << ((i & 1) ? std::to_string(2 * i) : "") << " ";
    }

    return 0;
}