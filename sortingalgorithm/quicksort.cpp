#include<iostream>
using namespace std;

int partition(int arra[], int fir, int last) {
    int pivot = arra[fir];
    int coun = 0;

    for (int i = fir + 1; i <= last; i++) {
        if (arra[i] <= pivot) {
            coun++;
        }
    }

    int pivotindex = fir + coun;
    swap(arra[pivotindex], arra[fir]);

    int i = fir, j = last;

    while (i < pivotindex && j > pivotindex) {
        while (arra[i] <= pivot) {
            i++;
        }

        while (arra[j] > pivot) {
            j--;
        }

        if (i < pivotindex && j > pivotindex) {
            swap(arra[i++], arra[j--]);
        }
    }

    return pivotindex;
}

void quicksort(int arra[], int fir, int last) {
    // Base case
    if (fir >= last) {
        return;
    }

    // Partition function
    int par = partition(arra, fir, last);

    // Left part sort
    quicksort(arra, fir, par - 1);

    // Right sort
    quicksort(arra, par + 1, last);
}

int main() {
    int arra[] = {1, 5, 6, 7, 9, 11, 4, 2};
    int n = sizeof(arra) / sizeof(arra[0]);

    quicksort(arra, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arra[i] << " ";
    }

    cout << endl;
    return 0;
}
