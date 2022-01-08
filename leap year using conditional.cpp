#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year\n";
    cin>>year;
    ((year%4==0)&&(year%100!=0))? cout<<"leap Year" : (year%400==0) ? cout<<"Leap year" : cout<<"Normal year";
}