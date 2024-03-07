#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    //int data2;
    node * next;
    //We wrap both the data item and the next node reference in a struct as:
    node(int data)
    {
        this->data=data;
        //this->data2=nexty;
        this->next=NULL;
    }
};
void insertathead(node * &head,int d)
{
    //neew node creation
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void print(node*&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"";
        temp=temp->next;
    }
    cout<<endl;
      
}
int main()
{
    //created a new node
    node*node1=new node(10);
    cout<<node1->data<<endl;
    //cout<<node1->data2<<endl;
    cout<<node1-> next <<endl;

    //head pointed to node1
    node *head=node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertathead(head,15);
    print(head);


    return 0;
}