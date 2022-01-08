#include<iostream>
using namespace std;
int main()
{
    float hard,cc,ts;
    int hf=0,cf=0,tf=0;
    cout<<"enter the value for hardness of steel\n";
    cin>>hard;
    cout<<"enter the value for the carbon content of steel\n";
    cin>>cc;
    cout<<"enter the value for the tensile strength of steel\n";
    cin>>ts;
    if(hard>50)
    {
        hf=1;
    }
    if(cc<0.7)
    {
        cf=1;
    }
    if(ts>5600)
    {
        tf=1;
    }
       if((hf==1)&&(cf==1)&&(tf==1))
    {
        cout<<"grade 10";
    }
    else if((hf==1)&&(cf==1)&&(tf==0))
    {
        cout<<"grade 9";
    }
    else if((hf==0)&&(cf==1)&&(tf==1))
    {
        cout<<"grade 8";
    }
    else if((hf==1)&&(cf==0)&&(tf==1))
    {
        cout<<"grade 7";
    }
    else if((hf=1)||(cf==1)||(tf==1))
    {
        cout<<"grade 6";
    }
    else 
    {
        cout<<"grade 5";
    }
}