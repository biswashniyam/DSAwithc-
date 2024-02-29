#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main() {
    int n;

    cout << "Enter number of terms you want: ";
    cin >> n;

    cout << "Fibonacci series: \n";

    for (int i = 1; i <= n; i++) {
        cout << Fibonacci(i) << "  ";
    }

    return 0;
}
