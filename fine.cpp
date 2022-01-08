#include<iostream>
using namespace std;
int main()
{
    int days;
    float fine;
    cout<<"enter the number of the days\n";
    cin>>days;
    if(days>0&&days<=5)
    {
        fine=0.50*days;
    }
    else if(days>=6&&days<=10)
    {
        fine = 1 * days;
    }
    else if(days>10)
    {
        fine = 5 * days;
    }
    
    if(days>30)
    {
        cout<<"Membership si cancelled\n";
    }

    cout<<"fine to be deposited = "<<fine;
}