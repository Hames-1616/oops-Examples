#include<iostream>
using namespace std;
int main()
{
    int stock = 500,order;
    char credit;
    cout<<"Enter the quantity to order\n";
    cin>>order;
    cout<<"Is your credit ok?\n";
    cin>>credit;
    if((order<=stock)&&(credit='y'))
    {
        cout<<"Order placed for "<<order<<" units";
    }
    else if((credit=='y')&&(stock<order))
    {
        cout<<"Order placed for "<<order<<" units and balance will be shipped later";
    }
    else
    {
        cout<<"please clear your balance and dues first";
    }

}