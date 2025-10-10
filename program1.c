#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    float data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,int item)
{
    if(s->top==SIZE-1)
        printf("\nStack overflow");
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s)
{
    if(s->top==-1)
        printf("\nSTACK underflow");
    else
    {
        printf("\nElement popped is %d",s->data[s->top]);
        s->top=s->top-1;
    }
}
void display(STACK *s)
{
    int i;
    if(s->top==-1)
        printf("\nStack is empty");
    else
    {
        printf("\nStack contents are:\n");
        for(i=s->top;i>=0;i--)
            printf("%d\n",s->data[i]);
    }
}
int main()
{
    int ch,item;
    STACK s;
    s.                     top=-1;
    for(;;)
    {
        printf("\n 1.PUSH");
        printf("\n 2.pop");
        printf("\n 3.Display");
        printf("\n 4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nRead element to be pushed:");
            scanf("%d",&item);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
