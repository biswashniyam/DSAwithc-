#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
if  (b == 0)  
return a;
while ( b > 0 ) 
{ 
int R = a % b; 
a = b; 
b = R;
} 
return a; 
}

int main() {
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    int result = gcd(num1, num2);
    cout << "Result is: " << result << endl;
    
    return 0;
}
