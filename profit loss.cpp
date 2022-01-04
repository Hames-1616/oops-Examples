#include<iostream>
using namespace std;
int main()
{
    float cp,sp,tt;
    cout<<"enter the cost price\n";
    cin>>cp;
    cout<<"enter the selling price\n";
    cin>>sp;
    if(sp>cp)
    {
        tt=sp-cp;
        cout<<"profit made = "<<tt;
    }
    else
    {
        tt=sp-cp;
        cout<<"loss = "<<tt;
    }
}