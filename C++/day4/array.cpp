#include<iostream>
using namespace std;

int main()
{
    //int arrayr[10]={1,2,3,4,5,6,7,8,9};
    int arrayr[]={1,2,3,4,5,6,7,8,9};
    cout<<"array element s are:"<<endl;
    //to print single element from an array
    cout<<arrayr[1]<<endl;
    int n=sizeof(arrayr)/sizeof(arrayr[0]);//if the size is not declared then this calculates size of array
    for(int i=0; i<n; i++)
    {
        cout<<arrayr[i]<<" ";
    }
return 0;
}