#include<iostream>
using namespace std;
void square(int y)
{
    int w=y*y;
    cout<<"value of x = "<<w;
}
void square(float y)
{
    float w=y*y;
    cout<<"\nvalue of x in float = "<<w;
}
void square(double y)
{
    double w=y*y;
    cout<<"\nvalue of x in double = "<<w;
}
int main()

{
    square(34);
    square(34.56F);
    square(34.22);
}

