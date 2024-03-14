#include<iostream>
using namespace std;

int simpleexpression(int b,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return b*simpleexpression(b,n-1);
    }
}
int main()
{
    int b=2;
    int n=4;
    int expvalue=simpleexpression(b,n);
    cout << "Result of " << b << "^" << n << " is: " << expvalue << endl;
    return 0;
}