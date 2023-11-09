#include<iostream>
using namespace std;
class complex
{
   private:
   int a,b;
   public:
   void set_data (int x,int y)
   {
      a=x, b=y;
   }
   void show_data ()
   {
       cout<<"\n a="<<a<<"b+"<<b;
   }
   complex operator +(complex c)
   {
       complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return (temp);
   }
};
   int main()
   {
       complex c1,c2,c3;
       c1.set_data(2,5);
       c2.set_data(8,3);
       c3=c1.operator+(c2);  //c3=c1+c2; can also be used.
       c3.show_data();
   }