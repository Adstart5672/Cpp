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
     
    // Pointers vs References
    double double_variable = 3.14;
    double& ref_double_variable = double_variable; // Reference to double_variable
    double* ptr_double_variable = &double_variable; // Pointer to double_variable


    std::cout << "Value of double_variable: " << double_variable << std::endl;
    std::cout << "Value through reference: " << ref_double_variable << std::endl;
    std::cout << "Value through pointer: " << *ptr_double_variable << std::endl;
    std::cout << "ptr_double_value : " << ptr_double_variable << std::endl;

    // Const Reference
    const int& const_ref = loooooooong_variable_name; // Reference to a constant integer
    // const_ref = 30; // Error: cannot modify a const reference
    std::cout << "Value of const_ref: " << const_ref << std::endl; // Output: 20
    std::cout << "Address of const_ref: " << &const_ref << std::endl; // Output: address of loooooooong_variable_name
    std::cout << "Address of loooooooong_variable_name: " << &loooooooong_variable_name << std::endl; // Output: address of loooooooong_variable_name
    std::cout << "Address of l: " << &l << std::endl; // Output: address of loooooooong_variable_name
    std::cout << "Address of ref_double_variable: " << &ref_double_variable << std::endl; // Output: address of double_variable
    std::cout << "Address of ptr_double_variable: " << ptr_double_variable << std::endl; // Output: address of double_variable
    std::cout << "Address of double_variable: " << &double_variable << std::endl; // Output: address of double_variable


    return 0;
}