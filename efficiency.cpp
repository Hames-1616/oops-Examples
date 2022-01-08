#include<iostream>
using namespace std;
int main()
{
    float hours;
    cout<<"enter the number of hours required to complete the work\n";
    cin>>hours;
    if(hours>2&&hours<3)
    {
        cout<<"you are highly efficient";
    }
    else if(hours>3&&hours<4)
    {
        cout<<"it is advised to improve speed";
    }
    else if(hours>4&&hours<5)
    {
        cout<<"you have to get trained inorder to improve speed";
    }
    else
    {
        cout<<"you have to leave the company";
    }
}