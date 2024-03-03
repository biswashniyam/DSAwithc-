#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool swapped=false;//optimising
        for (int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)//optimise gardeko sorted vaye j loop ma swap hudainanita**
        {
            //sorted vako vara pahilai
            break;
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
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"unsorted array : "<<endl;
  dekhaideyarray(n,arr);
  cout<<"sorted array"<<endl;
  bubblesort( arr, n);
  dekhaideyarray(n,arr);
}