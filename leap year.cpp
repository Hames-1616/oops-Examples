#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year\n";
    cin>>year;
    if(year%400==0)
    {
        cout<<year<<" is leap year";
    }
    else if(year%100==0)
    {
        cout<<year<<" is not a leap year";
    }
    else if(year%4==0)
    {
        cout<<year<<" is leap year";
    }
    else 
    {
        cout<<year<<" not a leap year";
    }
}