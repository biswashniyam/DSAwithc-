#include<iostream>
using namespace std;
#include<algorithm>
class Heap
{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0]=1;
        size=0;
    }
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent =index / 2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else
            {
                return ;
            }
        }
    }
    void print()

    {
        for(int i=1; i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

void deletefromheap()
{
    if (size == 0)
    {
        cout << "No elements to delete" << endl;
    }
    else
    {
        // Step 1: Put the last element into the first index
        arr[1] = arr[size];
        // Step 2: Remove the last element
        size--;

        // Take the root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex]) // Fixed the typo here
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        } // Removed the extra braces here
    }
}

};

//heapify algorithm
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left <= n && arr[largest] < arr[left])
    {
        largest=left;
    }
    if(right<= n && arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
//heap sort
void heapsort(int arr[],int n)
{
    int size=n;
    while(size>1)
    {
        //step1:swap
        swap(arr[size],arr[1]);
        //step 2
        size--;
        //step 3:
        heapify(arr,size,1);
    }
}

int main()
{
Heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
h.deletefromheap();
h.print();
//heapify s
int arr[6]={-1,54,53,55,52,50};
int n=5;
for(int i=n/2; i>0; i--)
{
    heapify(arr,n,i);
}
cout<<"printing the array now"<<endl;
for(int i=1;i<=n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
//heapify end

//heap sort
heapsort(arr,n);
cout<<"printing the array of heapsort now"<<endl;
for(int i=1;i<=n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}