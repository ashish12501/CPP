#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *START;
struct node* getnode()
  {
      struct node *n;
      n=(struct node*)malloc(sizeof(struct node));
      return n;
  }

void DisplayLL(){
    struct node *temp;
    temp=START;
    while (temp->next!=NULL)
    {
        printf("\n %d", temp->data);
        temp= temp->next;
    }
    printf("\n %d", temp->data);
}

void InsertNode()
{
    struct node *newnode, *temp;
    newnode=getnode();
    printf("enter data \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (START==NULL){
        START = newnode;
    }
    else
    {
        temp=START;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
    
}
void insertBEG(){
    struct node *temp,  *newnode;
    temp = START;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data wanted to add begining");
    scanf("%d",&newnode->data);
    START = newnode;
    newnode->next=temp;
    // free(temp);
}

void insertEND(){
    struct node *temp,  *newnode;
    temp = START;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data wanted to add ending");
    scanf("%d",&newnode->data);
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    
}

void LLdeletion(){
    int n;
    struct node *temp , *prev;
    temp = START; 
    printf("\n seuence of element you want to delete");
    scanf("%d",&n);
    for(int i = 1; i<n;i++){
        prev = temp;
        temp= temp->next;
    }
    prev->next=temp->next;
    free(temp);
}

void revll(){
    struct node *curr=START,*prev=NULL,*next=NULL,*head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;     
        curr=next;
    }
    head=prev;
    while (head!=NULL)
    {
        printf("\n%d",head->data);
        head=head->next;
    }
    
}
void reverse (){
    struct  node *head= START;
    struct node *prev=NULL, *next=NULL,*curr=head;
    while (curr !=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=curr;
}
    
int main(){
    InsertNode();
    insertBEG();
    insertEND();
    reverse();
    DisplayLL();

    
    
}