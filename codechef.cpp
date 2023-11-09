#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while (test--){
	    int n;
	    cin>>n;
        int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
        int minimum=a[0];
        for(int j=0;j<n;j++){
            if(a[j]<minimum) minimum=a[j];
	    }
        int count=0;
        for(int i=0;i<n;i++){
	        if(a[i]!= minimum) count++;
	    }
        cout<<count<<endl;
	}
	return 0;
}
