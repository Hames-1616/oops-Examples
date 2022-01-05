#include<iostream>
using namespace std;
int main()
{
    int year,bsyear=1900,leap_year,remyear,totdays,day;
    cout<<"enter the year\n";
    cin>>year;
    year=(year-1)-bsyear;//calculating years between basic and entered year//
    leap_year=year/4;//calculating leap years//
    remyear=year-leap_year;//days which are not leap year//
    totdays=(remyear*365)+(leap_year*366)+1;
    day=totdays%7;
     if(day==0)
        cout<<"Monday";
    else if(day==1)
        cout<<"Tuesday";
    else if(day==2)
        cout<<"Wednesday";
    else if(day==3)
        cout<<"Thursday";
    else if(day==4)
        cout<<"Friday";
    else if(day==5)
        cout<<"Saturday";
    else if(day==6)
        cout<<"Sunday";
    else
        cout<<"Wrong Entry";
    }