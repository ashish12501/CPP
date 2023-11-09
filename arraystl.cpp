#include<iostream>
#include<array>
using namespace std;

int main(){

array <int , 5> arr = {3,4,56} ;
  
  array<int,5> arra;
  arra.fill(7);
  for(int i = 0; i<5;i++){
      cout<<arra.at(i)<<endl;
  }

  array <int,4> rr = {34,5,23, 5};
  for(auto it; rr.begin(); it!=rr.end(); it++){
      cout<<*it<<" ";
  }   
}