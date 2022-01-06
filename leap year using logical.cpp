#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year\n";
    cin>>year;
    if((year%400==0||year%4==0)&&(year!=0))
    {
        cout<<year<<" is leap year";
    }
    else
    {
        cout<<year<<" is not leap year";
    }
}