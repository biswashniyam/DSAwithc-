#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    // Base case: If n is 0, the sum is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: Sum of n natural numbers is n + sum of (n-1) natural numbers
        return n + sumOfNaturalNumbers(n - 1);
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

    int result = sumOfNaturalNumbers(num);

    cout << "Sum of the first " << num << " natural numbers is: " << result << endl;

    return 0;
}
