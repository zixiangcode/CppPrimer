#include <iostream>
#include <vector>

int main() {

    std::vector<int> v = {1, 2, 3, 4, 5};
    int a[5];

    for (int i = 0; i != v.size(); i++) {
        a[i] = v[i];
    }

    std::cout << "a : ";
    for (auto i : a) {
        std::cout << i << " ";
    }

    return 0;
}