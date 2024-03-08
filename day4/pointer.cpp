#include<iostream>
using namespace std;
int main()
{
    int *num;
    num=new int(25);
    cout<<num<<endl;//it output address where 25 is stored
    cout<<*num<<endl;//it result in displaying 25 from that
    //because of that derefrencing operator(*) it access the value from address
}
