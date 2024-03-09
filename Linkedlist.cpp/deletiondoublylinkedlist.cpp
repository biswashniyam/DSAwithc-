#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int here)
    {
        this->data=here;
        this->prev=NULL;
        this->next=NULL;

    }
};
//traversing a linked list
void printnode(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
//gives the length of a linked list
int getLength(node* head)
{
    int len=0;
    node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
   return len;
}
//insert at head
void insertatbeginning(node* &tail,node* &head,int value)
{
    //empty list
    if(head == NULL) {
        node* temp = new node(value);
        head = temp;
    }
    else
    {
    node*temp=new node(value);
    temp->next=head;
    head->prev=temp;
    head=temp;

    }
}
//insert at tail
void insertattail(node* &tail,node* &head,int dat)
{
    if(tail == NULL) {
        node* temp = new node(dat);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(dat);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node* &tail, node* &head, int position, int d) 
{  //insert at Start
    if(position == 1) {
        insertatbeginning(tail,head, d);
        return;
    }
    node* temp = head;
    int cont = 1;

    while(cont < position-1) 
    {
        temp = temp->next;
        cont++;
    }
    //inserting at Last Position
    if(temp -> next == NULL) {
        insertattail(tail,head,d);
        return ;
    }
    //creating a node for d
    node* newnode = new node(d);
    newnode->next = temp -> next;
    temp -> next -> prev = newnode;
    temp -> next = newnode;
    newnode -> prev = temp;
}
void deleteNode(int position, node* & head) { 
    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    { //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cont = 1;
        while(cont < position) {
            prev = curr;
            curr = curr -> next;
            cont++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    printnode(head);
   /* node* head=NULL;
    node* tail=NULL;*/

    cout<<getLength(head)<<endl;

    insertatbeginning(tail,head,77);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertatbeginning(tail,head,99);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertattail(tail,head,25);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertattail(tail,head,50);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertatbeginning(tail,head,100);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertAtPosition(tail,head,2,777);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertAtPosition(tail,head,7,887);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertAtPosition(tail,head,9,687);
    printnode(head);
    cout<<getLength(head)<<endl;

    insertAtPosition(tail,head,1,111);
    printnode(head);
    cout<<getLength(head)<<endl;
    //delete first node
    deleteNode(1,head);
    printnode(head);
    cout<<getLength(head)<<endl;
    //delete middle node

    deleteNode(9,head);
    printnode(head);
    cout<<getLength(head)<<endl;
    



    return 0;
}