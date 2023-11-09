#include <bits/stdc++.h>
using namespace std;
int main()
{
  for (int i = 0; i <3; i++)
  {
    for (int j = 0; j < 2-i; j++)
        cout<<" ";
    for (int k = 0; k < 4+i*2; k++)
        cout<<"*";
    for (int j = 0; j < (3-i)*2; j++)
        cout<<" ";
    for (int k = 0; k < 4+i*2; k++)
        cout<<"*";
    cout<<endl;
  }
}