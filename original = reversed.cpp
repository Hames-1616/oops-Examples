#include<iostream>
using namespace std;
int main()
{
    int n,rem,reverse=0,origin;
    cout<<"enter the number\n";
    cin>>n;
    origin=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    cout<<reverse<<" is the reverse number\n";
    if(reverse==origin)
    {
        cout<<"original number and reversed number are identical";
    }
    else
    {
        cout<<"numbers are not identical";
    }
}