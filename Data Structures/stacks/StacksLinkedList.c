#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node* top=NULL;

struct node {
  int data;
  struct node *link;
};


void push(){
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data to push : ");
   scanf("%d",&newnode->data);
   newnode->link=NULL;
   if (top=NULL){
       top=newnode;
   }
   else{
       temp=top;
       top=newnode;
       top->link=temp;
    
   }
}
void DisplayLL(){
    struct node *temp;
    temp=top;
    while (temp->link!=NULL)
    {
        printf("\n %d", temp->data);
        temp= temp->link;
    }
    // printf("\n %d", temp->data);
}




int main()
{
    push();
    push();
    push();
    
    DisplayLL();
    // struct node *temp=top;
    // printf("%d",temp->data);
    // top=top->link;
    // printf("%d",temp->data);
    // top=top->link;
    // printf("%d",temp->data);
    // top=top->link;
    
}