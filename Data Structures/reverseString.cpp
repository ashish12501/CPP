#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string r,s;  

    cin>>t;
    cout<<"enter string";
    cin>>s;
    for (int i = t-1; i>=0 ; i--)
    {
        r[(-(i-t))-1]=s[i];
    }
    cout<<r;
}