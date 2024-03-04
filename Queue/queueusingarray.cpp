#include<iostream>
using namespace std;
#define SIZE 5

class queue {
    int arra[SIZE];
    int FRONT;
    int REAR;

public:
    queue() {
        FRONT = -1;
        REAR = -1;
    }
     bool isEmpty()
    {
        if(FRONT==-1 && REAR==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if(FRONT==0 && REAR==SIZE-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int item)
    {
        if(isFull())
        {
            cout<<"queue is full"<<endl;
        }
        else{
            if(FRONT==-1)
            FRONT=0;
            REAR++;
            arra[REAR]=item;
        }
    }
    void dequeue()
    {
        int deletedata;
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            deletedata=arra[FRONT];
            if(FRONT>=REAR)
            {
                FRONT=-1;
                REAR=-1;
            }
            else{
                FRONT++;
            }

        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty to display"<<endl;

        }
        else{
            cout<<"Items in a queue: "<<endl;
            for(int i=FRONT;i<=REAR;i++)
            {
                
                cout<<arra[i]<<" ";
            }
            cout<<endl;
        }
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Wanted value is : ";
            cout<<arra[FRONT]<<endl;
        }
    }
};

int main()
{
    queue hal;
    hal.enqueue(1);
    hal.enqueue(2);
    hal.enqueue(3);
    hal.enqueue(4);
    hal.enqueue(5);
    //hal.enqueue(6);//shows queue is full as it goes out of bound./stack overflow
    hal.display();//display item from a queue.(1 2 3 4 5)
    hal.dequeue();//it removes the first element from the queue (//removes 1)
    hal.display();
    hal.peek();//displays top FRONT positioned value without removing it
    

}