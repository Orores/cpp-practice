#include <iostream>
#include <cstdlib> // For atoi function

int main(int argc, char* argv[]) {
    // Check if the user provided exactly two arguments
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <value_for_a> <value_for_b>" << std::endl;
        return 1; // Exit with error code 1
    }

    // Convert command-line arguments to integers
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    // Print out the initial values of a and b
    std::cout << "Initial values:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;

    // Print out the values of a and b after swapping
    std::cout << "Values after swapping:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}

