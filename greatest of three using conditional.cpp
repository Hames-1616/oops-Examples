#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the value of x , y and z\n";
    cin>>x;
    cin>>y;
    cin>>z;
    ((x>y)&&(x>z)) ? cout<<x<<" is greater" : ((y>x)&&(y>z)) ? cout<<y<<" is greater" : cout<<z<<" is greater";
}