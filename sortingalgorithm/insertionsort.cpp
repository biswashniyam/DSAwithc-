#include<iostream>
using namespace std;
void insertionsort(int arra[], int n) 
{
    for (int i = 1; i < n; i++) 
    {//arra[]={6,5,3,1,8,7,2,4};
        int key = arra[i];
        int j = i - 1;
        while (j >= 0 && arra[j] > key) {
            arra[j + 1] = arra[j];
            j = j - 1;
        }

        // Insert key at the correct position
        arra[j + 1] = key;
    }
}
void printarray(int n,int arra[])
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
  int arra[]={6,5,3,1,8,7,2,4};
  int n=sizeof(arra)/sizeof(arra[0]);
  cout<<"unsorted array : "<<endl;
  printarray(n,arra);
  cout<<"sorted array"<<endl;
  //printarray(n,arra);
  insertionsort( arra, n);
printarray(n,arra);

}
//process
/*
Initial Array: {6, 5, 3, 1, 8, 7, 2, 4}

First Iteration (i = 1):
Key: key = 5
j = 0: Since 6 > 5, move 6 to the right.
Array becomes {6, 6, 3, 1, 8, 7, 2, 4}
j = -1: Now j becomes -1.
Insert Key: arra[j + 1] = key => arra[0] = 5
Array becomes {5, 6, 3, 1, 8, 7, 2, 4}

Second Iteration (i = 2):
Key: key = 3
j = 1: Since 6 > 3, move 6 to the right.
Array becomes {5, 6, 6, 1, 8, 7, 2, 4}
j = 0: Since 5 > 3, move 5 to the right.
Array becomes {5, 5, 6, 1, 8, 7, 2, 4}
j = -1: Now j becomes -1.
Insert Key: arra[j + 1] = key => arra[0] = 3
Array becomes {3, 5, 6, 1, 8, 7, 2, 4}

Third Iteration (i = 3):
Key: key = 1
j = 2: Since 6 > 1, move 6 to the right.
Array becomes {3, 5, 6, 6, 8, 7, 2, 4}
j = 1: Since 5 > 1, move 5 to the right.
Array becomes {3, 5, 5, 6, 8, 7, 2, 4}
j = 0: Since 3 > 1, move 3 to the right.
Array becomes {3, 3, 5, 6, 8, 7, 2, 4}
j = -1: Now j becomes -1.
Insert Key: arra[j + 1] = key => arra[0] = 1
Array becomes {1, 3, 5, 6, 8, 7, 2, 4}
*/