// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a = 4, b=3;
//     float pi = 3.14;
//     cout<<"this is tut 4 \n  here the value of a is "<<a<<  " \n the value of b is "<<b<<"\nthe value of pi is "<<pi;
//     return 0;
// }
 
// void sum()
// {
//     int a=9;
//     cout<<a;
// }


#include<bits/stdc++.h>
using namespace std;
int main ()
{
int num; cin>>num;
int count =0;
int x=num;
while(x!=0){
  count++;
  x=x/10;
}
  int sum=0;
  while(num!=0){
    int res=num%10;
    sum=sum+pow(res,count);
    num=num/10;
  }
  cout<<sum<<endl;
  // return 0;
}