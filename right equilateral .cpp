#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z,j,k,p,w,e,q;
    cout<<"enter the sides of the trianlges\n";
    cin>>x;
    cin>>y;
    cin>>z;
    j=pow(x,2) + pow(y,2);
    k=pow(z,2);
    p=pow(z,2) + pow(y,2);
    q=pow(x,2);
    w=pow(x,2) + pow(z,2);
    e= pow(y,2);
    if(x==y && y==z)
    {
        cout<<"the triangle is a equilateral triangle\n";
    }
    else if(x!=y&& y!=z &&x!=z )
    {
        cout<<"the triangle is a scalene triangle\n";
    }
    else if((x==y) &&  (x!= z)|| (x == z) && (x!= y)|| (z == y) && (z!= x))
    {
        cout<<"the trinagle is a isosceles triangle\n";
    }
    else if((j==k||p == q) || w == e)
    {
        cout<<"the triangle is a right angled triangle";
    }
}
