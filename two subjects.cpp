#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the percentage obtained in subject A\n";
    cin>>a;
    cout<<"Enter the percentage obtained in subject B\n";
    cin>>b;
    if(a>=55&&b>=45)
    {
        cout<<"student passed";
    }
    else if(a>=45&&a<55&&b>=b)
    {
        cout<<"student passed";
    }
    else if(b<45&&a>=65)
    {
        cout<<"allowed to reappear in examination in Subject B to qualify";
    }
    else
    {
        cout<<"failed!";
    }
}