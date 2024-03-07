#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node* next;//pointer is a pointer of node type
    node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};


int main()
{
    node*node1=new node(10);
    cout<<node1->value<<endl;
    cout<<node1->next<<endl;
    return 0;
}
