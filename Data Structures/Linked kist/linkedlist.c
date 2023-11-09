#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node{
   int data;
   struct node *next;
};
struct node * start = NULL;
  struct node* getnode()
  {
      struct node *n;
      n=(struct node*)malloc(sizeof(struct node));
      printf("enter data");
      scanf("%d",n->data);
      n->next=NULL;
      return n;
  }
  void createList(int n)
  {
      int i;
      struct node *newnode, *temp;
      for (int i = 0; i < n; i++)
      {
        if (start==NULL)
        {
          start=newnode;
        }
        else
        {
          temp=start;
          while (temp->next=NULL)
          {
          temp=temp->next;
          temp->next=newnode;
          }
        }
         
      }
      
  }
int main(){
  int n;
  start=getnode();
  printf("enter number of nodes");
  scanf("%d",&n);
  createList(n);
  
  
}

