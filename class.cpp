#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    float marks;
};
student input ();
void display (student);
int main()
{
    student aman;
    aman = input();
    display(aman);
}
student input ()
{
    student temp;
    cout<<"enter student name,rollno and marks";
    cin>>temp.name>>temp.rollno>>temp.marks;
    return(temp);
}
void display (student show)
{
    cout<<"\n"<<show.name<<"  "<<show.rollno<<"  "<<show.marks;   
}