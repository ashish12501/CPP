#include<iostream>
using namespace std;
class integer
{
    private:
    int x;
    public:
    void set_data (int a )
    {
      x=a;
    }
    void show_data ()
    {
      cout<<"\nx= "<<x;
    }
    integer operator ++()
    {
      integer i;
      i.x=++x;
      return (i);
    }
     integer operator ++(int)
    {
      integer i;
      i.x=x++;
      return (i);
    }
};
 int main()
 {
     integer n1,n2;
     n1.set_data (4);
     n1.show_data ();
     n2=n1++;
     n1.show_data ();
     n2.show_data ();
 }