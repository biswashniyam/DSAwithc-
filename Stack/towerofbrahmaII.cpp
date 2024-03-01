#include <iostream> 
using namespace std; 

void Hanoi(int n, char source, char dest, char aux)  
{ 
    if(n == 1) { 
        cout << "Move DISK " << n << " from " << source << " to " << dest << endl; 
    } 
    else { 
        Hanoi(n-1, source, aux, dest); 
        cout << "Move DISK " << n << " from " << source << " to " << dest << endl; 
        Hanoi(n-1, aux, dest, source); 
    } 
}

int main() { 
    int n;  
    cout << "Enter number of disks: "; 
    cin >> n; 
    Hanoi(n, 'S', 'D', 'A'); 
    return 0; 
}
