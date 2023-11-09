#include<iostream>
using namespace std;
class complex
{
    private:
    int a , b;
    public:
    complex (int x, int y)
     {
         a=x; b=y;
     } 
   void showData() 
    {
        cout<<"\n a= "<<a<<" b="<<b;
    } 
    
};
int main()
{
    complex c1(2,3) , c2(4,6);
    c1.showData();
    c2.showData();
    complex c3();
    return 0;
}