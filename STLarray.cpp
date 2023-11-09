#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int size,a;
     vector <int> v;
     cin>>size;
     for(int i =0; i<size; i++){
     cin>>a;
     v.push_back(a);
     }
     sort(v.begin(),v.end());
     for(int i =0; i<size; i++){
     cout<<v[i];
     }  
    
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
