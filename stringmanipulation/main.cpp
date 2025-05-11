#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::cout << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;
    str[0] = 'h'; // Change first character to lowercase
    std::cout << "Modified string: " << str << std::endl;

    // Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::isalnum('A'): " << std::isalnum('A') << std::endl;
    std::cout << "std::isalnum('^'): " << std::isalnum('^') << std::endl;
    std::cout << "std::isalnum('1'): " << std::isalnum('1') << std::endl;
    return 0;
}
