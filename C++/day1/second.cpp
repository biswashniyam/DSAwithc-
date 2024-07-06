#include<iostream>
using namespace std;
int main()
{

    //integer operation
    int a=10;
    int b=20;
    cout<<"sum is :"<<a+b<<endl;
    cout<<"Diffirence is:"<<b-a<<endl;
    cout<<"Multiplication is :"<<a*b<<endl;
    cout<<"Division is :"<<b/a<<endl;

    int a=123;
    cout<<a<<endl;

    char b ='v';
    cout<<b<<endl;

    bool bl= true;
    cout<<bl<<endl;

    float f=0.3222;
    cout<<f<<endl;

    double doi=1.23;
    cout <<doi<<endl;

    int sizey=sizeof(doi);
    cout<<"size of doi is :"<<sizey<<endl;

    //typecasting
    int a='a';
    cout<<a<<endl;
    

    char ch=98;
    //jaba ch=98 huncha teti bela 98 chai 
    //character ma typecast huncha
    cout<<ch<<endl;

    char chey=6;//integer 8 bit ko huncha max value 2^16-1
    //ho tara diyeko no tyo baund vanda dherai vayo so overflow

    cout<<chey<<endl;

    //How negative no are stored
    unsigned int checky=-12;//4294967284
    //2's complement bata aako vara dherai thulo value aaucha 
    //yesma
    cout<<checky<<endl;

//operators(+,-,*,/,%)
int a=2.0/5;//0.4 aaucha tara int datatype vako ley 0 matra lincha
cout<<a<<endl;

//relational operator(=,>,<,>=,<=,!=)
int a =2;
int b=3;
bool first=(a<=b);
cout<<first<<endl;

bool first=(a!=b);
cout<<first<<endl;

bool first=(a==b);
cout<<first<<endl;


//logical operation
int a=21;
cout<<!a<<endl;

int b=0;
cout<<!b<<endl;



 






    



    
    
    
    return 0;
}