#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character::"<<endl;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
    {
        cout<<"it lies inside lower case alphabet"<<endl;

    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"It lies inside uppercase alphabet"<<endl;

    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<"It lies inside the range of 0 to 9"<<endl;
    }
    return 0;
}