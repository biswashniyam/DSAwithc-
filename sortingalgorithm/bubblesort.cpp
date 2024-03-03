#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void dekhaideyarray(int n,int arra[])
{
  //cout<<"unsorted array:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arra[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[]={1,5,6,2,8,14,4,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"unsorted array : "<<endl;
  dekhaideyarray(n,arr);
  cout<<"sorted array"<<endl;
  bubblesort( arr, n);
  dekhaideyarray(n,arr);
}