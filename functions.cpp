#include<iostream>
using namespace std;
void sum (int, int);

int main()
{
    int a,b;
    cout<<"\n enter two numbers";
    cin>>a>>b;
    sum(a,b);
    return 0;
}
void sum (int a, int b)
{
  cout<<"sum of a and b is"<<a+b;
}
