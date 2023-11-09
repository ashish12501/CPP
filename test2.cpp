#include<bits/stdc++.h>
using namespace std;

struct me {
    int age;
    float weight;
    char firstChar;
    string str;

    me (int age_, float weight_,char firstChar_, string str_) {
         age = age_;
         weight= weight_;
         firstChar = firstChar_;
         str= str_;
    }
    me(){}
    
};
int main()
{
  me ashish =  me (2,33.5,'h',"hello ashish");

  cout<<ashish.age<<endl<<ashish.weight<<endl<<ashish.firstChar<<endl<<ashish.str<<endl;


}