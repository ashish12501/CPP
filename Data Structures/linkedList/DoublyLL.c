#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *prev;
   struct node *next;
};

struct node *Start=NULL;
  
struct node CreateLL(){
   struct node *newnode , *temp;
   newnode = (struct node*)malloc(sizeof(struct node));
   printf("enter data");
   scanf("\n %d", &newnode->data);
   if ( Start == NULL){
      Start=newnode;
      newnode->prev=NULL;
      newnode->next=NULL;
   }
   else
   {
      temp=Start;
      while (temp->next!=NULL)
      {
          temp=temp->next;
      }
      newnode->prev=temp;
      temp->next=newnode;
      newnode->next=NULL;
      
   }
   
}

void DisplayLL(){
    struct node *temp;
    temp=Start;
    while (temp->next!=NULL)
    {
        printf("\n %d", temp->data);
        temp= temp->next;
    }
    printf("\n %d", temp->data);
}
    void displayREV(){
       struct node *temp;
       temp=Start;
       while (temp->next!=NULL)
       {
          temp=temp->next;
       }
       while (temp->prev!=NULL)
       {
          printf("\n%d",temp->data);
          temp= temp->prev;
       }
          printf("\n%d",temp->data);
       
       
       
    }

void main()
{
    CreateLL();
    CreateLL();
    CreateLL();
    CreateLL();
    displayREV();

}