#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    
    node * next;
    //We wrap both the data item and the next node reference in a struct as:
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node * &head,int d)//a reference to a pointer head and an integer d representing the data for the new node.
{
    //neew node creation
    node *temp=new node(d);//Initializes the data member of the new node with the value d./Allocates memory
    temp->next=head;//Sets the next pointer of the new node (temp) to the current head of the linked list.
    //this links the existing node
    head=temp;
    //Updates the head pointer to point to the newly inserted node (temp).
    //This step makes the newly inserted node the new head of the linked list.
}
void print(node*&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
      
}
int main()
{
    //created a new node
    node*node1=new node(10);
    cout<<node1->data<<endl;
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