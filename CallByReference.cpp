#include<iostream>
using namespace std;
int sum (int &,int &);
int main()
{
    int a,b;
    cout<<"enter two numbers \n"; 
    cin>>a>>b;
    cout<<sum (a,b);
    return 0;
}
int sum (int &x, int&y)
{
    return (x+y);
}
