#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=1; i< n; i++)
    {
        int key=arr[i];
        int j=i-1;
     // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while(j>=0 && arr[j] > key)
        {
            //shift
            arr[j+1]=arr[j];
            --j;
        }
        arr[j +1]=key;
    }
}
//function to print an array
void printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "<<endl;
        if (i < size - 1) {
            cout << " ";}
    
    }
}
int main()
{
    int arr[]={12,11,13,5,1,15,6,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"unsorted array: "<<endl;;
    printarray(arr,n);
    insertionsort(arr,n);
    cout<<"sorted array :"<<endl;
    printarray(arr,n);

}