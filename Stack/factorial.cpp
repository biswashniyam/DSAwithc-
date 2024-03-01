#include<iostream>
using namespace std;

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: factorial of n is n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the input is non-negative
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Return an error code
    }

    int result = factorial(num);

    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
/*
factorial(5) = 5 * factorial(4)
factorial(4) = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) = 1 * factorial(0)
factorial(0) = 1 (base case)

Now, substitute these values back:

factorial(0) = 1
factorial(1) = 1 * 1 = 1
factorial(2) = 2 * 1 = 2
factorial(3) = 3 * 2 = 6
factorial(4) = 4 * 6 = 24
factorial(5) = 5 * 24 = 120
*/