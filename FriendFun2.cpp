#include <iostream>
using namespace std;
class A; class B;
class A
{
private:
    int a;
public:
    void set_data(int x)
    {
        a = x;
    }

    friend void sum(A , B);
};
class B
{
private:
    int b;
public:
    void set_data(int y)
    {
        b = y;
    }

    friend void sum(A, B);
};
void sum(A x, B y)
{
    cout << "\n sum is " <<x.a+y.b;
}
int main()
{
    A p;
    B q;
    q.set_data(6);
    p.set_data(8);
    sum(p, q);
    return 0;
}
