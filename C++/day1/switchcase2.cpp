#include<iostream>
using namespace std;

class calculator
{
    private:
    int a,b,result;
    char operation;
    public:
    void getdata()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        // cout<<"two value of a nd b are "<<a <<" and "<< b<<endl;
        cout<<"Enter an operator(+, -, *, /):"<<endl;
        cin>>operation;
        switch(operation)
        {
            case '+':
            cout<<a+b<<endl;
            break;

            case '-':
            cout<<a-b<<endl;
            break;


            case '*':
            cout<<a*b<<endl;
            break;


            case '/':
            cout<<a/b<<endl;
            break;
            
            case '%':
            cout<<a%b<<endl;
            break;

            default:
            cout<<"Enter the valid operator"<<endl;
            cout<<"Try again";
        }
    }
    
    

};
int main()
{
    calculator c1;
    c1.getdata();

    return 0;
}