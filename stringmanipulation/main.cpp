#include <iostream>
#include <iterator>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::cout << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;
    str[0] = 'h'; // Change first character to lowercase
    std::cout << "Modified string: " << str << std::endl;

    // Check if character is alphanumeri
    std::cout << std::endl;
    std::cout << "std::isalnum('A'): " << std::isalnum('A') << std::endl;
    std::cout << "std::isalnum('^'): " << std::isalnum('^') << std::endl;
    std::cout << "std::isalnum('1'): " << std::isalnum('1') << std::endl;

    if (std::isalnum('A'))
    {
        std::cout << "'A' is alphanumeric" << std::endl;
    }
    else
    {
        std::cout << "'A' is not alphanumeric" << std::endl;
    }

    // Check if character is alphabetic
    std::cout << std::endl;
    std::cout << "std::isalpha('A'): " << std::isalpha('A') << std::endl;
    std::cout << "std::isalpha('1'): " << std::isalpha('1') << std::endl;
    std::cout << "std::isalpha('^'): " << std::isalpha('^') << std::endl;

    // Check if character is blank
    std::cout << std::endl;
    std::cout << "std::isblank(' '): " << std::isblank(' ') << std::endl;
    std::cout << "std::isblank('\\t'): " << std::isblank('\t') << std::endl;
    std::cout << "std::isblank('A'): " << std::isblank('A') << std::endl;
    
    int blankcount{};
    char message[] = "Hello World!";
    for (size_t i = 0; i < std::size(message); i++) {
        if (std::isblank(message[i]))
        {
            std::cout << "Blank character found: " << message[i] << " At index " << i << std::endl;
            blankcount++;
        }
    }
    std::cout << "Number of blank characters: " << blankcount << std::endl;

    return 0;
}
