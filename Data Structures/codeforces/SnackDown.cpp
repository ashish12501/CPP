#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {2,3,5,1,8,6,7,4};
	int asize = sizeof(a) / sizeof(a[0]);		  
	for (int j = 0; j < asize; j++)
	{
		cout << a[j];
	}
	cout << endl;
	// int asize = sizeof(a) / sizeof(a[0]);
	sort(a, a + asize);
	//  array after sorting
	for (int j = 0; j < asize; j++)
	{
		cout << a[j];
	}
}