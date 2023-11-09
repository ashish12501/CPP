#include<iostream>
using namespace std;
int main()
{
    int A[5][5];
    cout<<"enter matrix";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>A[i][j];
        }
        
    }
    cout<<"matrix : \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        
    }
    return 0;     
    
}