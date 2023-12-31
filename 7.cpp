#include <iostream>

int main() {
    int number, sum = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    std::cout << (sum == number ? "Perfect" : "Not perfect") << std::endl;
    return 0;
}
