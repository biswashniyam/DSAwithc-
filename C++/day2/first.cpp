#include<iostream>
using namespace std;

int main()
{
    //conditional statements
    /*
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    if(n>0)
    {
        cout<<"Input no is greater than zero"<<endl;

    }
    else if(n>=0)
    {
        cout<<"input is equal to zero"<<endl;
    }
    else{
        cout<<"it is less than zero"<<endl;
    }
    int a,b;
    cout<<"ente rthe value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Value of a and b is :"<<a<<"and"<<b<<endl;*/
    //cin donot reads (space),(tab),(enter\n)
    //for this we use cin.get();

    /*int a,b;
    cout<<"Enter the value of a is :"<<endl;
    a=cin.get();//it picks up character if 1 is input it picks ASCII value of 1
    cout<<"Value of a is :"<<a<<endl;//(2  2)=50*/
    /*
Enter the value of a is :
1
Value of a is :49*/
//we can take input as space ,tab,enter by using a cin.get();
int a;
cout<<"Enter the value of a :"<<endl;
cin>>a;
if(a>0)
{
    cout<<"value is positive"<<endl;
}
else{
    if(a<0)
    {
        cout<<"A is less than zero"<<endl;
    }
    else{
        cout<<"isEqqual to zero"<<endl;
    }
}


}