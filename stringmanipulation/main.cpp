#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::cout << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;
    str[0] = 'h'; // Change first character to lowercase
    std::cout << "Modified string: " << str << std::endl;
    return 0;
}
