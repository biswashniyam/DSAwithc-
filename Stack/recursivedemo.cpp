#include <iostream>
using namespace std;

void checkgaramta(int n) {
    if (n <= 0) {
        cout << "Reached the base case. Terminating recursion." << endl;
        return;
    }
    
    cout << "Inside checkgaramta with argument: " << n << endl;
    // Recursive call
    checkgaramta(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkgaramta(num);
    return 0;
}
