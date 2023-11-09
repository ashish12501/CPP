#include <iostream>  
      
using namespace std;

int main()
{
    int a[10], b[10], temp, size; char choice;
    cout <<"enter sice of array :\n";
    cin >> size;
    cout << "enter array elements";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "want to reverse the Array\n";
    cin >> choice;
    if (choice == 'y')
    {
        for (int i = size-1; i >=0; i--)
        {
           b[(-(i-size))-1] =a[i];
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}