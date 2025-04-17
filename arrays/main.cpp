/*
 * @file main.cpp
 * @brief Demonstrates the use of arrays in C++ with various initialization and iteration techniques.
 * 
 * This program covers:
 * - Declaring and initializing arrays.
 * - Accessing and modifying array elements.
 * - Iterating through arrays using loops.
 * - Leaving some array elements uninitialized.
 * - Using range-based for loops for array traversal.
 * - Summing up array elements.
 * 
 * Key sections:
 * - `scores` array: Demonstrates manual initialization and reading uninitialized elements.
 * - `count` array: Shows initialization using a loop.
 * - `salaries` array: Demonstrates declaration and initialization at the same time.
 * - `numbers` array: Illustrates partial initialization with default values for the rest.
 * - `class_size` array: Demonstrates range-based for loop for traversal.
 * - Summing elements of the `scores` array using a range-based for loop.
 * 
 * Note:
 * - Uninitialized elements in arrays may contain garbage values.
 * - Attempting to modify a `const` array will result in a compilation error.
 */
#include <iostream>

int main(int argc, char const *argv[])
{
    int scores[10];
    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;

    std::cout << std::endl;
    std::cout << "Reading out 10 scores : " << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "scores[1] : " << scores[1] << std::endl;
    std::cout << "scores[2] : " << scores[2] << std::endl;
    std::cout << "scores[3] : " << scores[3] << std::endl;
    std::cout << "scores[4] : " << scores[4] << std::endl;
    std::cout << "scores[5] : " << scores[5] << std::endl;
    std::cout << "scores[6] : " << scores[6] << std::endl;
    std::cout << "scores[7] : " << scores[7] << std::endl;
    std::cout << "scores[8] : " << scores[8] << std::endl;
    std::cout << "scores[9] : " << scores[9] << std::endl;
    
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
    std::cout << std::endl;

    int count[10];
    for (size_t i = 0; i < 10; ++i)
    {
        count[i] = i *1;
    }

    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << "count[" << i << "] : " << count[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Declare and initialize at the same time" << std::endl;

    double salaries[5] = {1000.0, 2000.0, 3000.0, 4000.0, 5000.0};
    for (size_t i = 0; i < 5; ++i)
    {
        std::cout << "salaries[" << i << "] : " << salaries[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Leaving out some elements uninitialized" << std::endl;
    int numbers[10] = {1, 2, 3};
    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << "numbers[" << i << "] : " << numbers[i] << std::endl;
    }
    
    int class_size[] = {10, 20, 30, 40, 50};
    std::cout << std::endl;
    for (auto value : class_size)
    {
        std::cout << "value : " << value << std::endl;
    }

    // const int multipliers[] = {1, 2, 3, 4, 5};
    // multipliers[0] = 10; // Error: cannot modify a const array
    std::cout << std::endl;
    
    int sum = 0;
    for (int element : scores )
    {
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
    return 0;
}
