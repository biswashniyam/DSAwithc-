#include<iostream>
using namespace std;


class heap
{
    public:
    int arr[10];
    int size=0;

    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert (int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent=index/2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deletey()
    {
        if(size==0)
        {
            cout<<"Kei ni rakhexaina k delete garni ho "<<" ";
            cout<<"hahahahhahahah"<<endl;
            return;
        }
        //1
        arr[1]=arr[size];
        //2
        size--;
        
        //3.taking a root node to its correct position
        int i=1;
        while(i<size)
        {
            int leftnode=2*i;
            int rightnode=2*i+1;

            if(leftnode < size && arr[i] < arr[leftnode])
            {
                swap(arr[i],arr[leftnode]);
                i=leftnode;
            }
            else if(rightnode < size && arr[i] < arr[rightnode])
            {
                swap(arr[i],arr[rightnode]);
                i=rightnode;
            }
            else{
                return;
            }
        }
    }
    void print()
    {cout<<"Elements in an array are:"<<endl;
        for(int i=1;i<=size;i++)
        {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    heap he;
    he.insert(50);
    he.insert(55);
    he.insert(53);
    he.insert(52);
    he.insert(54);
    he.print();
    he.deletey();
    he.print();
}