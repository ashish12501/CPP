#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,6> nums={0,2,1,5,3,4};
    int n = nums.size();
    vector<int >ans(n); 
    for (int i = 0; i <n; i++)
    {
        ans[i]=nums[nums[i]];
    }
    for (int i = 0; i <n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}