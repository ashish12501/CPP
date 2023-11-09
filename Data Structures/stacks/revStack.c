#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max_limit 10


// int stack[max_limit],top=-1;
char stack[max_limit]; int top=-1;


void push()
{
    top+=1;
    printf("ENTER A NUMBER TO PUSH :\n");
    scanf("%c",&stack[top]);
    // gets(stack);
}

void rev(){
    printf("REVERSED STACK : ");
    while(stack[top]!=stack[0]){
        printf("%c ",stack[top]);
        top-=1;
    }
    printf("%c ",stack[top]);

}

int main(){
    push();
    push();
    push();
    push();
    push();
    push();

    
    rev();
}