#include <iostream>
#include <stdexcept>

int main() {

    int a, b;
    std::cin >> a >> b;
    
    try {
        if (b == 0) {
            throw std::runtime_error("The dividend is 0");
        }
        std::cout << "The answer is : " << a / b << std::endl;
    } catch (std::runtime_error err) {
        std::cerr << err.what() << std::endl;
    }


    return 0;
}