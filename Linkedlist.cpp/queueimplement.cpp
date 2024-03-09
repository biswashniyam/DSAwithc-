#include<iostream>
using namespace std;

class node
{
    public:
    int info;
    node* next;
};
node* REAR=NULL;
node* FRONT=NULL;

void enqueue(int data)
{
    node* newnode;
    newnode=new node();
    newnode->info=data;
    newnode->next=NULL;
    if(REAR==NULL)
    {
        REAR=newnode;
        FRONT=newnode;
    }
    else
    {
        REAR->next=newnode;
        REAR=newnode;
    }
}
int dequeue()
{
    int item=-1;
    if(FRONT==NULL)
    {
        cout<<"Queue is empty"<<endl;
        return item;
    }
    else
    {
        node*temp=FRONT;
        item=temp->info;
        if(temp->next==NULL)
        {
            FRONT=NULL;
        }
        else
        {
            FRONT=temp->next;
        }
        delete temp;
        return item;

    }
    
}
int main()
{
    // Enqueue some elements
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Dequeue and print elements
    cout << "Dequeued element: " << dequeue() << endl;
    cout << "Dequeued element: " << dequeue() << endl;

    // Enqueue more elements
    enqueue(40);
    enqueue(50);

    // Dequeue and print elements
    cout << "Dequeued element: " << dequeue() << endl;
    cout << "Dequeued element: " << dequeue() << endl;

    // Attempt to dequeue from an empty queue
    cout << "Dequeued element: " << dequeue() << endl;

    return 0;
}
