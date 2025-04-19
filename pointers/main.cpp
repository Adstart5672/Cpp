#include <iostream>

int main(int argc, char const *argv[])
{
    int *numbers{};
    double *fractional{};

    // Explicitly initialize the pointers to nullptr
    int *p1 = nullptr;
    double *p2 = nullptr;

    std::cout << "Numbers pointer: " << numbers << std::endl;
    std::cout << "Fractional pointer: " << fractional << std::endl;
    std::cout << "p1 pointer: " << p1 << std::endl;
    std::cout << "p2 pointer: " << p2 << std::endl;
    std::cout << "Size of int pointer: " << sizeof(p1) << std::endl;
    std::cout << "Size of double pointer: " << sizeof(p2) << std::endl;

    int var1{50};
    int *ptr1{&var1}; // Pointer to var1

    std::cout << "Value of var1: " << var1 << std::endl;
    std::cout << "Addrhujess of var1: " << &var1 << std::endl;
    std::cout << "Value of ptr1: " << ptr1 << std::endl;
    std::cout << "Value pointed to by ptr1: " << *ptr1 << std::endl;
    std::cout << "Address of ptr1: " << &ptr1 << std::endl;

    int int_var2 {65};
    int_var2 = 120;

    ptr1 = &int_var2; // Now ptr1 points to int_var2
    std::cout << "Value of int_var2: " << int_var2 << std::endl;
    std::cout << "Address of int_var2: " << &int_var2 << std::endl;
    
    //Dereferencing a pointer
    int *ptr3{nullptr};
    int var3{100};
    ptr3 = &var3; // ptr3 points to var3

    std::cout << "Value of var3: " << var3 << std::endl;
    std::cout << "Address of var3: " << &var3 << std::endl;
    std::cout << "Value pointed to by ptr3: " << *ptr3 << std::endl; // Dereferencing ptr3 to get the value of var3
    std::cout << "Address of ptr3: " << &ptr3 << std::endl; // Address of the pointer itself

    char *p_char_var{nullptr};
    char char_var{'A'};
    p_char_var = &char_var; // p_char_var points to char_var
    std::cout << "Value of char_var: " << char_var << std::endl;
    std::cout << "Address of char_var: " << &char_var << std::endl;
    std::cout << "Value pointed to by p_char_var: " << *p_char_var << std::endl;

    char char_var2{'B'};
    p_char_var = &char_var2; // p_char_var now points to char_var2
    std::cout << "Value of char_var2: " << char_var2 << std::endl;

    char *p_message {"Hello, World!"};
    std::cout << "Message: " << p_message << std::endl; // Output: Hello, World!
    std::cout << "Address of p_message: " << &p_message << std::endl; // Output: Address of the pointer itself
    std::cout << "Value pointed to by p_message: " << *p_message << std::endl; // Output: H (first character of the string)

    char message[] {"Hello, World!"};
    message[0] = 'h'; // Changing the first character of the array
    std::cout << "Modified message: " << message << std::endl; // Output: hello, World!

    //Initialize the pointer with dynamic memory allocation
    //Dynamically allocate memory at run time and make a pointer point to it
    int *dynamic_array{nullptr}; // Allocate memory for an array of 5 integers
    dynamic_array = new int[4]; // Allocate memory for 5 integers
    dynamic_array[0] = 1;
    dynamic_array[1] = 2;
    dynamic_array[2] = 3;
    dynamic_array[3] = 4;
    dynamic_array[4] = 5; // Initialize the array
    std::cout << std::endl;
    for (int i = 0; i < 5; ++i)
    
    {
        std::cout << "Value at index " << i << ": " << *(dynamic_array + i) << std::endl;
    }
   
    // Deallocate the memory allocated for the dynamic array
    delete[] dynamic_array; // Use delete[] for arrays
    std::cout << dynamic_array[1] << std::endl; // Undefined behavior, as the memory has been deallocated
    std::cout << "Dynamic array pointer after deletion: " << dynamic_array << std::endl; // Still points to the same address, but the memory is deallocated
    // Set the pointer to nullptr after deletion to avoid dangling pointer
    dynamic_array = nullptr; // Avoid dangling pointer
    std::cout << "Dynamic array pointer after setting to nullptr: " << dynamic_array << std::endl; // Now points to nullptr
    
    {
        int local_var{100};
        int *local_ptr_var = new int; 
        std::cout << "Local variable: " << local_var << std::endl;
        std::cout << "Local pointer variable: " << local_ptr_var << std::endl; // Address of the dynamically allocated memory
        std::cout << "Value pointed to by local pointer variable: " << *local_ptr_var << std::endl; // Undefined behavior, as the memory is not initialized
        delete local_ptr_var; // Deallocate the memory allocated for the local pointer variable
        local_ptr_var = nullptr; // Avoid dangling pointer

    }
    // The local_ptr_var goes out of scope here, but the memory is not deallocated
    // This will cause a memory leak if not handled properly
    // To avoid this, always deallocate memory when it is no longer needed
    std::cout << "Local pointer variable goes out of scope" << std::endl;
    int *nole{new int};
    *nole = 200; // Assign a value to the dynamically allocated memory
    std::cout << "Value of nole: " << nole << std::endl; // Undefined behavior, as the memory is not initialized
    std::cout << "Value pointed to by nole: " << *nole << std::endl;
    delete nole; // Deallocate the memory allocated for the local pointer variable
    nole = nullptr; // Avoid dangling pointer

    //Writing to a uninitialized pointer
    //int *uninitialized_ptr; // Uninitialized pointer (contains garbage value)
    //*uninitialized_ptr = 83;
    // This will cause undefined behavior, as the pointer is not initialized to a valid memory location
    // std::cout << "Value pointed to by uninitialized pointer: " << *uninitialized_ptr << std::endl; // Undefined behavior
    //std::cout << "Dereferencing uninitialized pointer: " << *uninitialized_ptr << std::endl; // Undefined behavior
    // This will cause a segmentation fault or access violation error, as the pointer is not initialized to a valid memory location
    // To avoid this, always initialize pointers to nullptr or a valid memory location before dereferencing them

    //int *ptr5{};
    //*ptr5 = 790; // This will cause undefined behavior, as the pointer is not initialized to a valid memory location
    //    // std::cout << "Value pointed to by ptr3: " << *ptr5 << std::endl; // Undefined behavior
    // This will cause a segmentation fault or access violation error, as the pointer is not initialized to a valid memory location
    return 0;
}
