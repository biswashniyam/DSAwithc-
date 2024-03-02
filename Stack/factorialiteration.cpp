#include<iostream>
using namespace std;

int fact(int n) {
    int facty = 1; // Initialize facty to 1

    while (n > 0) {
        facty = facty * n;
        n--;
    }

    return facty;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int result = fact(num); // Capture the result of the fact function

    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
