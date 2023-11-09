#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node* getnode(){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void insertLL(){
    struct node *temp, *newnode;
    newnode=getnode();
    printf("Enter the data");
    scanf("\n %d",&newnode->data);
    if(start==NULL){
        start=newnode;
        newnode->next=start;
    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=start;
    }
    
}
void display(){
    struct node *temp;
    temp = start;
    while (temp->next!=start)
    {
        printf("\n %d",temp->data );
        temp=temp->next;
    }
        printf("\n %d",temp->data );
    
    
}


int main(){
    insertLL();
    insertLL();
    insertLL();
    insertLL();
    display();
}


