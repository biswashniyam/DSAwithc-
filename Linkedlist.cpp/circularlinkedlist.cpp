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

 void insertnode(node* &tail,int element,int dat1)
 {
    //emptylist
    if(tail==NULL)
    {
        node* newnode=new node(dat1);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        //list is not empty
        node* curr=tail;
        while(curr->data != element)
        {
            curr=curr->next;

        }
        //element found ->curr is representing element node
        node* temp=new node(dat1);
        temp->next=curr->next;
        curr->next=temp;
    }
 }
 //traverse
 void print(node*&tail)
 {
    node*temp=tail;//tail ko location
    do
    {   cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}
void deletey(node* &tail,int value)
{
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        //non-empty

        //assuming that "value" is present in the Linked List
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value) 
        {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if(curr == prev) {
            tail = NULL;
        }
        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
}    }   

 int main()
 {
   node*tail=NULL;
   
   insertnode(tail,5,3);
   print(tail);

   insertnode(tail,3,5);
   print(tail);
   /*
   insertnode(tail,5,7);
   print(tail);

   insertnode(tail,7,9);
   print(tail);
   
   insertnode(tail,5,6);
   print(tail);

   insertnode(tail,9,10);
   print(tail);

   insertnode(tail,3,4);
   print(tail);
*/
   deletey(tail,3);
   print(tail);
 }