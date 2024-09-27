#include <iostream>
#include <string>

// Recursive function to compute the binary representation of a positive integer x
std::string binaryRepresentationRecursive(int x) {
    // Base case: if x is 0, return an empty string
    if (x == 0) {
        return "";
    } else {
        // Recursive step: get the binary representation of x / 2 and append the last bit (x % 2)
        return binaryRepresentationRecursive(x / 2) + std::to_string(x % 2);
    }
}

// Wrapper function to handle the input and output properly
std::string getBinaryRepresentation(int x) {
    // Special case: if x is 0, return "0"
    if (x == 0) {
        return "0";
    }
    // Call the recursive function
    return binaryRepresentationRecursive(x);
}

int main() {
    int x;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    // Check if the input is valid
    if (x < 0) {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
        return 1; 
    }

    std::string result = getBinaryRepresentation(x);

    std::cout << "Binary representation of " << x << " is: " << result << std::endl;

    return 0;
}
