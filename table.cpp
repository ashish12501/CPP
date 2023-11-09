#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"enter the number - ";
    cin>>a;
    cout<<"table of the number you entered"<<endl;
    for(i =1; i <=10; i++)
    {
    cout<<a<<"*"<< i <<"="<<a*i<<endl;
    }
return 0;
}