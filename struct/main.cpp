#include <iostream>

int main() {
    // Struct definition
    struct Person {
        std::string name;
        int age;
    };

    // Creating an instance of the struct
    Person person1;
    person1.name = "Alice";
    person1.age = 30;

    // Accessing struct members
    std::cout << "Name: " << person1.name << ", Age: " << person1.age << std::endl;

    // Using a reference to modify the struct
    Person& refPerson = person1;
    refPerson.age = 31; // Modify through reference

    std::cout << "Updated Age: " << person1.age << std::endl;

    return 0;
}