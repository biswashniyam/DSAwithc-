#include<iostream>
using namespace std;
#define SIZE 7

class stacku
{
    private:
    int TOP;
    char arri[SIZE];
    public:
    stacku()
    {
        TOP=-1;
    }
    bool isFull()
{
    if(TOP== SIZE-1)
    {
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty()
{
    if(TOP==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
char pushing(char revchar)
{
    if(isFull())
    {
        cout<<"stack overflow"<<endl;
    }
    else{
        TOP++;
        arri[TOP]=revchar;

    }
}
char pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"poped item : "<<arri[TOP]<<endl;
        TOP--;
    }

}
char peek() {
        if (isEmpty()) {
            cout << "stack is empty" << endl;
            return '\0'; // Return a default value indicating an empty stack
        }
        else {
            cout<<"Top element:"<<arri[TOP]<<endl;
        }
    }

    int getSize() //retrives size of the stack/total size print garcha yesley
    {
       cout<<"get size is :"<< TOP + 1<<endl;
    }

    int search(char element) 
    {
        for (int i = TOP; i >= 0; i--) {
            if (arri[i] == element) {
                cout << "Found element '" << element << "' at position " << TOP - i + 1 << " from the top." << endl;
                return TOP - i + 1;
            }
        }
        cout << "Element '" << element << "' not found in the stack." << endl;
        return -1; // Element not found
    }

void readstack()//prints stack
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack items:"<<endl;
        for(int i=0;i<SIZE; i++)
        {
            cout<<arri[i]<<endl;
        }
    }
}
};
int main()
{
    stacku obj1;
    obj1.pushing('b');
    obj1.pushing('i');
    obj1.pushing('s');
    obj1.pushing('w');
    obj1.pushing('a');
    obj1.pushing('s');
    obj1.pushing('h');
    obj1.readstack();//prints all the items stored in a stack
    /*obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();*/
    obj1.peek();
    obj1.getSize();
    obj1.search('w');


    return 0;
}