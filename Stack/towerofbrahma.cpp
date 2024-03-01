#include<iostream>
using namespace std;

void heramnata(int n,int source,int auxillary,int destination)
{
    //statement 1 
    if(n==1)
    {
        //cout<<"From first statement"<<endl;
        cout<<"Move disk "<< n<< " from "<<source<<" to "<<destination<<endl;
        return;
    }
    //statement 2
heramnata(n-1,source,destination,auxillary);  
//cout<<" second statement"<<endl;
cout<<"Move disk "<<n<<" From "<<source<<" to "<<destination<<endl;
//cout<<"third statement"<<endl;
heramnata(n-1,auxillary,source,destination);

}

int main()
{
    int n;
    cout<<"Enter the number of disks:";
    cin>>n;
    int source=1;
    int auxillary=2;
    int destination=3;
    heramnata(n,source,auxillary,destination);
    return 0;
}
