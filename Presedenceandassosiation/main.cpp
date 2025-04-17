#include <iostream>
int main() {
    int a{6};
    int b{3};
    int c{8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};
    int result = a + b * c - d / e + f * g; // 6 + 3 * 8 - 9 / 3 + 2 * 5
    // The precedence of operators determines the order in which operations are performed in an expression.
    // In this case, multiplication (*) and division (/) have higher precedence than addition (+) and subtraction (-).
    // Therefore, the expression is evaluated as follows:
    // 1. b * c = 3 * 8 = 24
    // 2. d / e = 9 / 3 = 3
    // 3. f * g = 2 * 5 = 10
    // 4. Now substitute back into the expression: a + 24 - 3 + 10
    // 5. 6 + 24 = 30
    // 6. 30 - 3 = 27
    // 7. 27 + 10 = 37
    // So the final result is 37.    
    std::cout << "Result: " << result << std::endl; // Output: 155
    return 0; }