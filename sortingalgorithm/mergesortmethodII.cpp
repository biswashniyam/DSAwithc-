#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = (s+e)/2;
    int n1 = mid - s + 1;
    int n2 = e - mid;

    // Create temporary arrays
    int left[n1], right[n2];

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[s + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[s..e]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = s; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if there are any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if there are any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    int mid = (s+e)/2;

    //left part sort garcha 
    mergeSort(arr, s, mid);

    //right part sort garcha 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main() {
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}