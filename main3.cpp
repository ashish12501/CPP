#include<iostream>
using namespace std;
int main()
{
  
  int first_num , second_num , choice;
  cout<<"enter your choice \n";
  cout<<"1-addition \n";
  cout<<"2 subtraction \n";
  cout<<"3- multipication \n";
  cout<<"4- division \n";
  cin>>choice;
  cout<<"enter two nubers";
  cin>>first_num;
  cin>>second_num;
  switch (choice)
  {
  case 1:
    cout<<"sum = "<<first_num + second_num;
    break;
  case 2:  
    cout<<"difference = "<<first_num - second_num;
    break;
  case 3:
    cout<<"multiple = "<<first_num * second_num;
    break;
  case 4:
    cout<<"division = "<<first_num / second_num;
    break;
  
  default:
    cout<<" wong choice";
    break;
  }

    return 0;
}
