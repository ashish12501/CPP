#include<bits/stdc++.h>
using namespace std;

int arrBS( int arr[], int n , int x){
     int low = 0, high = n-1;
     while(low<=high)
     {
        int mid = (low + high)/2;
        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid]<x)
        {
           low = mid+1;
        }
        else if (arr[mid]>x)
        {
            high = mid-1;
        }
        
        
     }
  

return -1;

}

int firstOccurance(int arr[], int n , int x){
    int low = 0, high = n-1,mid, ans = -1;
    while ( low <= high )
       mid = (low+high)/2;
    {
        if(arr[mid]== x){
           ans = mid;
           high = mid-1;
           
        }
        if (arr[mid]<x)
        {
            low = mid+1;
        }
        else if (arr[mid]>x)   
        {
            high= mid-1;
        }
        
        
    }
    return ans;
}

int main( ) {

    int n;
    std::cin>>n;
    int arr [n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    int x;
    cout<<"enter number to search";
    cin>>x;


    cout<<firstOccurance(arr , n, x);
}