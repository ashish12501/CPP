#include<bits/stdc++.h>
using namespace std;

int main(){


  int x = 3;
  int y =5;
  int ans = 0;
  for (int i = 0; i <= 31; i++) {
    if (((1 LL << i) & x) != ((1 LL << i) & y)) {
      ans |= (1 LL << i);
    }
  }
  cout<<ans;
  
     
    
}