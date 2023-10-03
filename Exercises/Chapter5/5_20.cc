#include <iostream>
#include <string>

int main() {

    std::string curStr, preStr;
    while (std::cin >> curStr) {
        if (curStr == preStr) {
            break;
        } else {
            preStr = curStr;
        }
    }
    if (std::cin.eof()) {
        std::cout << "no word was repeated." << std::endl;
    } else {
        std::cout << curStr << "\n";
    }

    return 0;
}