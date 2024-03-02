#include<iostream>
using namespace std;
//13,72,98,29,87,66,52,51,36
//13,29,98,72,87,66,52,51,36
//13,29,

void selectiongarnithau(int arra[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arra[j]<arra[minindex])
            {
                minindex=j;
            }
        }
        swap(arra[minindex],arra[i]);
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
  int arra[]={29,72,98,13,87,66,52,51,36};
  int n=sizeof(arra)/sizeof(arra[0]);
  cout<<"unsorted array : "<<endl;
  dekhaideyarray(n,arra);
  cout<<"sorted array"<<endl;
  selectiongarnithau( arra, n);
dekhaideyarray(n,arra);
}