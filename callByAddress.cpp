#include<iostream>
using namespace std;
int sum (int*,int *);
int main()
{
    int a,b;
    cout<<"enter a and b \n";
    cin>>a>>b;
    cout<< sum (&a,&b);

}
int sum (int *x,int *y)
{
   int temp = *x+*y;
   return (temp);
}
