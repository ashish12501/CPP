#include<iostream>
using namespace std;
class complex
{
    private:
     int a,b;
    public:
     void set_data (int x, int y)
    {  a=x; b= y; }
    void show_data ()
    { cout<<"\n a= "<<a<<"b="<<b; }
    friend complex operator +(complex,complex);
};
    complex operator + (complex X,complex Y)
    {
      complex temp;
      temp.a=X.a+Y.a;
      temp.b=X.b+Y.b;
      return (temp);
    }
    
    int main() 
    {
        complex c1,c2,c3;
        c1.set_data(5,7);
        c2.set_data(6,9);
        c3=c1+c2;
        c3.show_data();
        
    }