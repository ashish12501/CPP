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
        cout<<"\n enter element you want to insert\n";
        cin>>data;
        cout<<"enter position you want to insert\n";
        cin>>pos;
        // for (int i = size-1; i >pos-1; i--)
        for (int i = size-1; i >pos-2; i--)
        {
            a[i+1]= a[i];
        }
            a[pos-1]=data;
            size=size+1;
         for (int i = 0; i < size; i++)
        {
            cout<<a[i];
        }

    }
    return 0;
} 
