#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    int max;
    cout<<"enter the first side\n";
    cin>>x;
    cout<<"enter the second side\n";
    cin>>y;
    cout<<"enter the third side\n";
    cin>>z;
    max=x;
    if(max<y)
    {
        max=y;
    }
    if(max<z)
    {
        max=z;
    }
    if(max==x&&x<(y+z))
    {
        cout<<"trianfle is valid";
    }
    else if(max==y&&y<(x+z))
    {
        cout<<"triangle is valid";
    }
    else if(max==z&&z<(x+y))
    {
        cout<<"triangle is valid";
    }
    else 
    {
        cout<<"trianlge is invalid";
    }

}