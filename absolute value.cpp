#include<iostream>
using namespace std;
int main()
{
    int num,n;
    cout<<"enter the number to find the absolute value\n";
    cin>>n;
    num=n;
    if(num<0)
    {
        num=(-1)*num;
    }
    cout<<"absolute value of "<<n<< " = " <<num;
}