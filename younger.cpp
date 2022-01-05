#include<iostream>
using namespace std;
int main()
{
    int ram,shy,aj;
    cout<<"enter the age of ram\n";
    cin>>ram;
    cout<<"enter the age of shyam\n";
    cin>>shy;
    cout<<"enter the age of ajay\n";
    cin>>aj;
    if(shy<ram&&shy<aj)
    {
        cout<<"shyam is younger";
    }
    else if(ram<shy&&ram<aj)
    {
        cout<<"ram is younger";
    }
    else
    {
        cout<<"ajay is younger"; 
    }
}