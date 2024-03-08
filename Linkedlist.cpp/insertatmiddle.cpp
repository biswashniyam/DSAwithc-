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
void insertathead(node*&head,int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node *&tail, int data)
{
    node *temp = new node(data);
    if (tail == NULL)
    {
        // If the list is empty, both head and tail should point to the new node
        tail = temp;
    }
    else
    {
        // Otherwise, update the next of the current tail to point to the new node
        tail->next = temp;
        // Update the tail to be the new node
        tail = temp;
    }
}
void insertatmiddle(node*&head,int position,int d)
{
    //insert at Start
    if(position == 1) {
        insertathead(head, d);
        return;
    }
    //insert at middle
    node* temp  = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    //creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 
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
    node *node1=new node(50);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    node *head=node1;
    node *tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,8);
    print(head);
    insertattail(tail,13);
    print(head);

    insertatmiddle(head,5,22);
    print(head);
    return 0;
}