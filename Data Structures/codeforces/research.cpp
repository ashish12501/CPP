#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, smallest = 1, greatest = 9;
    cout << "enter a number : \n";
    cin >> n;
    // for extracting smallest n digit number
    for (int i = 0; i < n - 1; i++)
    {
        smallest = smallest * 10;
    }
    cout << smallest << endl;
    // for extracting greatest n digit number
    for (int i = 0; i < n - 1; i++)
    {
        greatest = greatest * 10 + 9;
    }
    cout << greatest;
    // entering the main loop
    for (int i = smallest; i <= greatest; i++)
    {

        int a[n], SMALLEST = 0, GREATEST;
        for (int i = 0; smallest > 0; i++)
        {
            int r = smallest % 10;
            a[i] = r;
            smallest = smallest / 10;
        }

        int asize = sizeof(a) / sizeof(a[0]);
        sort(a, a + asize);
        for (int j = asize - 1; j >= 0; j--)
        {
            GREATEST = GREATEST * 10 + a[j];
        }
        cout << GREATEST << "\n";
        int s=SMALLEST;
        while (s != 0)
        {
            int rem = s % 10;
            GREATEST = GREATEST * 10 + rem;
            s /= 10;
        }
        cout<<GREATEST<<"     ";
    }
}