#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node getnode()
{
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : \n");
    scanf("%d", &n->data);
    n->next=NULL;
    return n;
}

int main()
{
    struct node *newnode, *head, *temp;
    int choice = 1;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : \n");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("do you want to continue ( 1, 0)? ");
        scanf("%d", &choice);
    }
    
    while (temp->next != NULL)
    // while (temp != NULL)
    {
        temp=head;
        printf("\t %d ", temp->data);
        temp = temp->next;
    }
    // printf("\t %d ",temp->data);
    

}
