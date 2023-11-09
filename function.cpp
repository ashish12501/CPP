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
   // for extracting greatest n digit number
   for (int i = 0; i < n - 1; i++)
   {
      greatest = greatest * 10 + 9;
   }
   // entering the main loop
   int count = 0;
   for (int i = smallest; i <= greatest; i++)
   {
      count++;
      int a[n], SMALLEST = 0, GREATEST = 0;
      int arn = i;
      for (int i = 0; arn > 0; i++)
      {
         int r = arn % 10;
         a[i] = r;
         arn = arn / 10;
      }
      cout << endl;
      int asize = sizeof(a) / sizeof(a[0]);
      sort(a, a + asize);
      for (int j = asize - 1; j >= 0; j--)
      {
         GREATEST = GREATEST * 10 + a[j];
      }
      cout << "greatest " << count << ":" << GREATEST << "          ";
      int g = GREATEST;
      while (g != 0)
      {
         int rem = g % 10;
         SMALLEST = SMALLEST * 10 + rem;
         g /= 10;
      }
      cout << "smallest " << count << ":" << SMALLEST;

      // ---------------------------------------------------------------------------------------------------------

      // int D[10];
      // for (int i = 0; i < 10; i++)
      // {
      //    D[i] = GREATEST - SMALLEST;
      //    int b[n];
      //    for (int i = 0; arn > 0; i++)
      //    {
      //       int r = arn % 10;
      //       a[i] = r;
      //       arn = arn / 10;
      //    }
      //    int asize = sizeof(a) / sizeof(a[0]);
      //    sort(a, a + asize);
      //    for (int j = asize - 1; j >= 0; j--)
      //    {
      //       GREATEST = GREATEST * 10 + a[j];
      //    }
      //    int g = GREATEST;
      //    while (g != 0)
      //    {
      //       int rem = g % 10;
      //       SMALLEST = SMALLEST * 10 + rem;
      //       g /= 10;
      //    }
      //    cout<<"\n"<<D[i]<<"    ";
      // }
   }
}