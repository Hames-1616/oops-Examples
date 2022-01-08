#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character\n";
    cin>>c;
    (c>=97&&c<=122)? cout<<"Character entered is a lowercase alphabet\n" : cout<<"Character entered is not a lowercase alphabet\n";
    (c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)? cout<<"Character entered is a special symbol" : cout<<"character entered is not a special symbol";
    
}
