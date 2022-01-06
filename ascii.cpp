#include<iostream>
using namespace std;
int main()
{
    char c;
    int asc;
    cout<<"enter the character\n";
    cin>>c;
    asc=c;
    cout<<"ASCII value of"<<c<<" is "<<asc;
    if(asc>=65&&asc<=90)
    {
        cout<<"\nCapital letter";
    }
    else if(asc>=97&&asc<=122)
    {
        cout<<"\nSmall letter";
    }
    else if(asc>=48&&asc<=57)
    {
        cout<<"\ndigit";
    }
    else if(asc>=0 && asc<=47 || asc>=58 && asc<=64 || asc>=91 && asc<=96 || asc>=123 && asc<=127)
    {
        cout<<"\nSpecial Symbol";
    }
    else
    {
        cout<<"outside limit";
    }
}