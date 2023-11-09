#include<iostream>
using namespace std;

int main()
{
    int a[10],size,pos, data;
    cout<<"enter size of array\n";
    cin>>size;
    if (size>9)
    {
        cout<<"array limit exceed\n";
    }
    else
    {
        cout<<"enter array elements \n";
        for (int i = 0; i < size; i++)
        {
             cin>>a[i];
        }
        cout<<"array entered : \n";
        for (int i = 0; i < size; i++)
        {
            cout<<a[i];
        }
        cout<<"enter posetion you want to delete \n";
        cin>>pos;
        for (int i = pos-1; i < size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
         cout<<"array after deletion : \n";
        for (int i = 0; i < size; i++) 
        {
            cout<<a[i];
        }
        return 0;
    }
}