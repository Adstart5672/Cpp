#include <iostream>
#include <string>

// Struct definition
struct Person {
    std::string name;
    int age;
};

// Function to determine age category
std::string getAgeCategory(int age) {
    if (age < 0) return "Invalid";
    if (age < 1) return "Newborn";
    if (age < 3) return "Toddler";
    if (age < 13) return "Child";
    if (age < 20) return "Teenager";
    if (age < 65) return "Adult";
    if (age < 80) return "Senior";
    if (age < 90) return "Retired";
    if (age < 100) return "Elderly";
    if (age < 120) return "Legend";
    return "Unknown";
}

int main() {
    Person person1;

    // Input name
    std::cout << "Insert Name: ";
    std::getline(std::cin, person1.name);

    // Input age with validation
    std::cout << "Insert Age: ";
    while (!(std::cin >> person1.age) || person1.age < 0) {
        std::cout << "Invalid age. Please enter a non-negative number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Determine age category
    std::string ageCategory = getAgeCategory(person1.age);

    // Output result
    if (ageCategory == "Invalid") {
        std::cout << "Age cannot be negative." << std::endl;
    } else if (ageCategory == "Legend") {
        std::cout << "Hello " << person1.name << ", You are a legend! You are the oldest human being alive!" << std::endl;
    } else {
        std::cout << "Hello " << person1.name << ", You're " << person1.age << " and You're " << ageCategory << "." << std::endl;
    }

    return 0;
}