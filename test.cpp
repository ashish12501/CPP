#include <bits/stdc++.h>
// #include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int n, a[10], SMALLEST = 0, GREATEST, count;
  cin >> n;
  // count = 0;
  for (int i = 0; n > 0; i++)
  {
    int r = n % 10;
    a[i] = r;
    n = n / 10;
  }
  // for (int j = 0; j <5; j++)
  // {
  //   cout << a[j];
  // }
  cout << endl;
  int asize = sizeof(a) / sizeof(a[0]);
  sort(a, a + asize);
     // array after sorting
  //  for (int j = 0; j < asize; j++)
  //  {
  //     cout << a[j];
  //  }
  for (int j = 0; j <5; j++)
  {
    SMALLEST = SMALLEST * 10 + a[j];
  }
  cout << "smallest possible:" << SMALLEST;
  int s = SMALLEST;
  while (s != 0)
  {
    int rem = s % 10;
    GREATEST = GREATEST * 10 + rem;
    s /= 10;
  }
  cout <<"greatest possible:"<< GREATEST;
}