#include <cstddef>
#include <iostream>
#include <iterator>

int main() {
    int ia[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    using int_array = int[4];

    std::cout << "Range For : \n";
    for (const int_array &row: ia) {
        for (const int col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nFor Loop : \n";
    for (size_t i = 0; i != 3; i++) {
        for (size_t j = 0; j != 4; j++) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nUsing Pointer : \n";
    for (int_array *row = ia; row != ia + 3; row++) {
        for (int *col = *row; col != *row + 4; col++) {
            std::cout << *col << " ";
        }
        std::cout << "\n";
    }

    return 0;
}   