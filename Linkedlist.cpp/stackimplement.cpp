#include<iostream>
using namespace std;
class node
{
    public:
    int info;
    node* next;
};
node* TOP=NULL;

void push(int data)
{
    node* newnode;
    newnode=new node();
    newnode->info=data;
    if(TOP==NULL)
    {
        newnode->next=NULL;
        TOP=newnode;
    }
    else
    {
        newnode->next=TOP;
        TOP=newnode;
    }
}
int pop()
{
    int item=-1;
    if(TOP==NULL)
    {
        cout<<"Stackis empty"<<endl;
        return item;
    }
    else
    {
        node* temp=TOP;
        item=temp->info;
        if(temp->next==NULL)
        {
            TOP=NULL;
        }
        else{
            TOP=temp->next;
        }
        delete temp;
        return item;

    }

}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << "Popped element: " << pop() << endl;
    cout << "Popped element: " << pop() << endl;

    return 0;
}
