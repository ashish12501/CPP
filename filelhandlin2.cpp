#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open ("D:\\Coding Content\\C++\\myfile.dat", ios::in);
    ch=fin.get();
    while (!fin.eof())
    {
     cout<<ch;
     ch=fin.get();
    }
    fin.close();
    return 0;
    
}