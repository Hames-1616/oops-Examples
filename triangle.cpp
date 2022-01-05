#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,t;
    cout<<"enter the first angle\n";
    cin>>s1;
    cout<<"enter the second angle\n";
    cin>>s2;
    cout<<"enter the third angle\n";
    cin>>s3;
    t=s1+s2+s3;
    if(t==180)
    {
        cout<<"valid triangle";
    }
    else
    {
        cout<<"not a triangle";
    }
}