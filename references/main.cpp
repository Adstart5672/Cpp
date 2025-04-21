#include <iostream>

int main() {

    int loooooooong_variable_name = 10;
    int& l = loooooooong_variable_name;
    l = 20; // Change the value of the original variable through the reference

    std::cout << "Value: " << l << std::endl; // Output: 20
    std::cout << "Value of real variable: " << loooooooong_variable_name << std::endl; // Output: 20
    std::cout << "&l : " << &l << std::endl;
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof l: " << sizeof(int&) << std::endl; // Output: size of int (usually 4 bytes on 32-bit systems)
     
    return 0;
}