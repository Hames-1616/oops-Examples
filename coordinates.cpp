#include<iostream>
using namespace std;
int main()
{
    int x1,y1;
    cout<<"enter the coordinates of x and y\n";
    cin>>x1;
    cin>>y1;
    if(x1==0&&y1!=0)
    {
        cout<<x1<<","<<y1<<" lies on the y-axis";
    }
    else if(x1!=0&&y1==0)
    {
        cout<<x1<<","<<y1 <<" lies on the x-axis";
    }
    else if (x1==0&&y1==0)
    {
        cout<<x1<<","<<y1 <<" lies on the origin";
    }
    else 
    {
        cout<<"wrong coordinates";
    }
}