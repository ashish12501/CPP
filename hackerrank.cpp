#include<bits/stdc++.h>
using namespace std;

int main() {
   
    // int arr[100]; // Declare an array of MAX_SIZE
    // int i, N;

    // /* Input array size */
   
    // scanf("%d", &N);

    // /* Input elements in array */
    
    // for(i=0; i<N; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // /*
    //  * Print all elements of array
    //  */
    
    // for(i=0; i<N; i++)
    // {
    //     printf("%d, ", arr[i]);
    // }
    // return 0;  






vector<int> arr={1,2,3,4,5} ;
int r,temp, n = arr.size();
cin>>r;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < n; j++)
    {
       temp= arr[j];
       arr[j]=arr[j+1];

    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}     












}