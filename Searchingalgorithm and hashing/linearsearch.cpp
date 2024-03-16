#include<iostream>
using namespace std;
int search(int arri[],int item,int n) 
    {
        for (int i = 0; i<n; i++) 
        {
            if (arri[i] == item) 
            {
                return i;
            }
        }
        return -1;
    }
    
    int main()
    {
    int arri[] = {1, 2, 3, 4, 5};
    int n = sizeof(arri) / sizeof(arri[0]);
    int item = 2;
    int position = search(arri, item, n);
    if (position != -1) {
        cout << "Element " << item << " found at position " << position << " in the array." << endl;
    } else {
        cout << "Element " << item << " not found in the array." << endl;
    }
    return 0;

    }