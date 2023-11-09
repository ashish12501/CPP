#include<iostream>
using namespace std;
template <class x> x add (x a, x b)
{
    return a+b;
}

int main()
{
    int a=4, b= 9;
    float c=6.9, d= 9.4;
    cout<<"sum of "<<a<<" and "<<b<<" = "<<add (a,b)<<endl; 
    cout<<"sum of "<<c<<" and "<<d<<" = "<<add (c,d)<<endl; 
}
   