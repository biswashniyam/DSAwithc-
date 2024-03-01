#include<iostream>
using namespace std;

// Function to generate the Fibonacci series up to n terms
void generateFibonacci(int n) {
    int firstTerm = 1, secondTerm = 1, nextTerm;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        cout << firstTerm << ", ";

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

int main() {
    int num;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> num;

    // Check if the input is non-negative
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Return an error code
    }

    generateFibonacci(num);

    return 0;
}
