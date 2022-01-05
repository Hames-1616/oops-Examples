#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;
    cout<<"enter the length of the rectangle\n";
    cin>>l;
    cout<<"enter the breadth of the rectangle\n";
    cin>>b;
    area=l*b;
    perimeter=2*l+2*b;
    if(area>perimeter)
    {
        cout<<"area is greater";
    }
    else
    {
        cout<<"area is not greater than perimeter";
    }

}