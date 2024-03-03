#include<iostream>
using namespace std;

 void merge(int arra[],int fir,int las)
{
   //length
   int mid=(fir+las)/2;
   int len1=mid-fir+1;
   int len2=las-mid;
   
   int *first = new int[len1];
   int *second = new int[len2];

   //copy values
    int index = fir;
    for(int i=0; i<len1; i++) {
        first[i] = arra[index++];
    }
    index = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arra[index++];
    }

    //merge arrays
    int index1 = 0;
    int index2 = 0;
    index = fir;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arra[index++] = first[index1++];
        }
        else{
            arra[index++] = second[index2++];
        }
    }
    while(index1 < len1) {
        arra[index++] = first[index1++];
    }

    while(index2 < len2 ) {
        arra[index++] = second[index2++];
    }

    delete []first;
    delete []second;


}
void mergesot(int arra[],int fir,int las)
{
    //base case
  if(fir >= las)
  {
    return;
  }
  int mid=(fir+las)/2;
  mergesot(arra,fir,mid);//left part divide
  mergesot(arra,mid+1,las);//right part
  merge(arra,fir,las);
}
int main()
{
  int arra[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
  int n=15;
  mergesot(arra,0,n-1);
  for(int i=0;i<n;i++){
        cout << arra[i] << " ";
    } cout << endl;
    return 0;
}
