#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, world" << std::endl;

    std::cout << "Enter your name: ";

    std::string name;
    std::cin >> name;

    if (name == "1")
        std::cout << "Fail\n";
    else
        std::cout << "Passed\n";
    return EXIT_SUCCESS;
}
