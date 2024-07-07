#include<iostream>
using namespace std;
class weekend
{
    private:
    int day;
    public:
    void getdata()
    {
        cout<<"Enter the no of day from 1-7:"<<endl;
        cin>>day;
        
        switch(day)
        {
            case 1:
            cout<<"Sunday"<<endl;

            case 2:
            cout<<"Monday"<<endl;

            case 3:
            cout<<"Tuesday"<<endl;

            case 4:
            cout<<"wednesday"<<endl;

            case 5:
            cout<<"Thrusday"<<endl;

            case 6:
            cout<<"Friday"<<endl;

            case 7:
            cout<<"Saturday"<<endl;

            default:
            cout<<"Input out of bounds"<<endl;
            cout<<"Please try agin within 1-7"<<endl;
        }
    }

};
int main()
{
weekend w1;
w1.getdata();
return 0;
}
