#include <iostream>

int main(int argc, const char **argv)
{
    short int var1{20};
    short int var2{30};

    char var3{40};
    char var4{50};

    std::cout << "Size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "Size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "Size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "Size of var4 : " << sizeof(var4) << std::endl;

    auto result{var1 + var2};
    auto result2{var3 + var4};

    std::cout << "size of result : " << sizeof(result) << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;
    return 0;
}