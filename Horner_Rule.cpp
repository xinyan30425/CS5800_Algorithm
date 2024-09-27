#include <iostream>
#include <vector>
#include <cmath>

// Function implementing Horner's rule to evaluate a polynomial
double horner(const std::vector<int>& coefficients, double x) {
    double result = 0.0;
    for (int i = coefficients.size() - 1; i >= 0; --i) {
        result = coefficients[i] + x * result;
    }
    return result;
}

// Function to convert a binary representation (vector of bits) to decimal using Horner's rule
int binaryToDecimal(const std::vector<int>& binary) {
    // Coefficients are binary digits in reverse order, x is the base 2
    return static_cast<int>(horner(binary, 2));
}

int main() {
    std::vector<int> binary = {1, 0, 1, 1};

    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Output the result
    std::cout << "The decimal representation is: " << decimal << std::endl;

    return 0;
}
