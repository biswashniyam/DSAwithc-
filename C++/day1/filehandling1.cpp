#include<iostream>
#include<fstream>
using namespace std;
class openfile
{
    private:
    int a;
    public:

    void getfile()
    {
        // opening a text file for writing
        ofstream myfile("new.txt");
        // close the file
        myfile.close();

    }
};

int main()
{
    openfile of;
    of.getfile();
    return 0;
}