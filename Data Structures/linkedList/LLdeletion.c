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

int main(){
    int n;
    printf("enter the number of nodes in list");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
         InsertNode();
    }
    DisplayLL();
    LLdeletion();
    DisplayLL();
}