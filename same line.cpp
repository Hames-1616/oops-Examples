#include<iostream>
using namespace std;
int main()
{
    float x1,x2,x3,y1,y2,y3,m,n;
    cout<<"enter the value of x1 and y1\n";
    cin>>x1;
    cin>>x2;
    cout<<"enter the value of x2 and y2\n";
    cin>>x2;
    cin>>y2;
    cout<<"enter the value of x3 and y3\n";
    cin>>x3;
    cin>>y3;
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n)
    {
        cout<<"all points fall on the same line";
    }
    else
    {
        cout<<"all poimts doesnt not fall on the same line";

    }
}