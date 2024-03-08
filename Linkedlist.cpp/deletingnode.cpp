#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node* &head,int det)
{
    node* temp=new node(det);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int puch)
{
    node* temp=new node(puch);
    if(tail==NULL)
    {
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void insertatmiddle(node* &head,int position,int datey)
{
    if(position==1)
    {
        insertathead(head,datey);
    }
    int count=1;
    node*temp=head;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
//new node creation
node* newnode=new node(datey);
newnode->next=temp->next;
temp->next=newnode;
    
}
//delete node from list
void deletenode(node* &head,int position)
{
     //deleting first or start node
    if(position == 1) 
    {
        node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    //delete from middle or last
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) 
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
         prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
}}


void print(node* &head)
{
    node* temp=head;
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
     cout<<node1->data<<" ";
     cout<<node1->next<<endl;
    node* head=node1;
    node* tail=node1;
    
    insertathead(head,77);
    print(head);
    insertathead(head,44);
    print(head);

    insertattail(tail,333);
    print(head);

    insertathead(head,554);
    print(head);

    insertatmiddle(head,6,888);
    print(head);

    deletenode(head,1);
    print(head);

    return 0;

}