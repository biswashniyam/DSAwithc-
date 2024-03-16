#include<iostream>
using namespace std;
int iterative(int array[], int item, int low, int high) 
{
    // Repeat until the pointers low and high meet each other
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        // If the element is found at mid, return it
        if (array[mid] == item)
            return mid;
        // If the element is greater than the middle element, search the right half
        if (array[mid] < item)
            low = mid + 1;
        // If the element is smaller than the middle element, search the left half
        else
            high = mid - 1;
    }
    return -1; // Element not found
}
int recursive(int array[], int item, int low, int high) 
{
    if (high >= low) 
    {
        int mid = low + (high - low) / 2;
        // If found at mid, then return it
        if (array[mid] == item)
            return mid;
        // Search the left half
        if (array[mid] > item)
            return recursive(array, item, low, mid - 1);
        // Search the right half
        return recursive(array, item, mid + 1, high);
    }
    return -1; // Element not found
}
int main() {
    int array[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int n = sizeof(array) / sizeof(array[0]);
    int item = 11;
    int result = recursive(array, item, 0, n - 1);
    if (result != -1) {
        cout << "Element " << item << " found at index " << result << endl;
    } else {
        cout << "Element " << item << " not found in the array." << endl;
    }
    // Using iterative binary search
    int itemite=23;
    int result_iterative = iterative(array, itemite, 0, n - 1);
    if (result_iterative != -1) {
        cout << "Element " << itemite << " found at index " << result_iterative << " (Iterative)" << endl;
    } else {
        cout << "Element " << itemite << " not found in the array (Iterative)." << endl;
    }
    return 0;
}

