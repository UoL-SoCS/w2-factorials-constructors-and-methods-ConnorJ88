#define CATCH_CONFIG_MAIN

// Function to calculate factorial using multiple threads
long calculateFactorial(int n) {
    long result = 1;
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers");
    }
    //TODO: Implement the function to calculate factorial of n
    for(int i; i<n+1; i++)
        {
            result *= i;
        }
    return result;
}
