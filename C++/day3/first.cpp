#include<iostream>
using namespace std;
int main()
{
    /*
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
    */
   /*int n;
   cout<<"Enter the value of n to run loop nth times:"<<endl;
   cin>>n;
   int i=0;
   while( i <= n)
   {
    cout<<""<<endl;
    cout<<i<<endl;
    i++;
    

   }
   return 0;*/

   int a;
   cout<<"Enter the value of a:"<<endl;
   cin>>a;
   int sum=0;
   int i=0;
   while(i<=a)
   {
    sum=sum+i;
    i++;
   }
   cout<<"Sum is :"<<sum<<endl;
   return 0;
}