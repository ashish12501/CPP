#include<iostream>
using namespace std;
struct book
{
    int bookID;
    char tittle[20];
    float price;
};
int main()
{
    book matrix;
    cout<<"enter bookID, tittle and price"<<endl;
    cin>>matrix.bookID>>matrix.tittle>>matrix.price; 
    cout<<matrix.bookID<<matrix.tittle<<matrix.price;
}