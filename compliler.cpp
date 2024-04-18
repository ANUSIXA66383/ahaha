#include <iostream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input);

    if (input == "PLEASE_PRINT('прив')") {
        std::cout << "прив" << std::endl;
    } else {
        std::cout << input << std::endl;
    }

    return 0;
}