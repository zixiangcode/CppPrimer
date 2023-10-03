#include <iostream>
#include <vector>

bool is_prefix(std::vector<int> &a, std::vector<int> &b) {
    if (a.size() > b.size()) {
        return is_prefix(b, a);
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    std::vector<int> a = {0, 1, 1, 2};
    std::vector<int> b = {0, 1, 1, 2, 3, 5, 8};

    std::cout << (is_prefix(a, b) ? "Yes" : "No") << std::endl;

    return 0;
}