#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};


int main()
{
    node *node1=new node(10);
    node *node2=new node(20);
    node * node3=new node(30);
    cout<<node1->data<<" ";
    cout<<node2->data<<" ";
    cout<<node3->data<<" ";
}