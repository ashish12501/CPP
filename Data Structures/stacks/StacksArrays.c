#include<stdio.h>
#include<conio.h>
#define MaxSize 20

int stack[MaxSize], top=-1;

void push (int x){
    if(top==MaxSize-1){
        printf("ERROR : Stack Overflow");
    }
    else{
    stack[++top]=x;
    }
   
}

void pop (){
    top = top-1;
}

int Is_empty (){
    if (top==-1)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
        
    }
}
int Top()
{
     return stack[top];
}
void Print(){
    printf("STACK : ");
    for (int i =0; i<=top; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
    

int main()
{   
    push(5);
    Print();
    push(2);
    push(5);
    Print();
    pop();
    Print();
    Is_empty();

}




