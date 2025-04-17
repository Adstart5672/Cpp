#include <iostream>

int main(){
    int a = 10;
    int *p = &a; // Pointer to integer
    int **pp = &p; // Pointer to pointer to integer

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value pointed by p: " << *p << std::endl;
    std::cout << "Address of p: " << &p << std::endl;
    std::cout << "Value of pp: " << pp << std::endl;
    std::cout << "Value pointed by pp: " << *pp << std::endl;
    std::cout << "Value pointed by the pointer pointed by pp: " << **pp << std::endl;

    return 0;    
}

