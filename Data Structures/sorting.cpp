#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,10>arr ;
    cout<<"enter elements in an array \n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
        /* code */
    }
    
    // sort(arr[0],arr[5]);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }                                  
            
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr.at(i)<<" ";
    }
    
    return 0;




}