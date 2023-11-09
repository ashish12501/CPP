#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set_data(int,int);
    void show_data ()
    {
        cout<<"\n a-"<<a<<"b-"<<b;
    }

};
void complex:: set_data(int x,int y)
 {
   a=x,b=y;
 }

int main ()
{
    complex B1,B2;
    B1.set_data(3,8);
    B2.set_data(6,7);
    B1.show_data();
    B2.show_data();
    return 0;

}
