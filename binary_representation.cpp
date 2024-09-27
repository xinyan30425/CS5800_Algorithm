#include <iostream>
#include <vector>
#include <algorithm> // For reverse


std::string binaryRepresentation(int x) {
    std::vector<int> binary_digits;

    // Iteratively compute the binary digits
    while (x > 0) {
        binary_digits.push_back(x % 2); // Append the remainder (0 or 1)
        x = x / 2; // Update x to be x // 2 (integer division)
    }

    // Reverse the order of binary_digits to get the correct binary representation
    std::reverse(binary_digits.begin(), binary_digits.end());

    // Convert the binary digits to a string
    std::string binary_string;
    for (int digit : binary_digits) {
        binary_string += std::to_string(digit);
    }

    return binary_string;
}

int main() {
    int x;

    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    if (x <= 0) {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }

    // Compute the binary representation of x
    std::string result = binaryRepresentation(x);

    std::cout << "Binary representation of " << x << " is: " << result << std::endl;

    return 0;
}
