#include <iostream>
#include <string>

int main() {
    std::string name;//Users's name.
    std::cout << "Enter your name: ";//User enters his name
    std::getline(std::cin, name);//Reading the string with spaces
    std::cout << "Hello world from " << name << std::endl;//Display the inscription with  User's name
    return 0;
}
