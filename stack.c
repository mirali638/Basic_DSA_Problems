#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int stack[5], top = -1, maxsize = 4;
void push();
void pop();
void peek();
void peep();
void change();
void show();

void main()
{
    int ch;
    printf("1:push\n");
    printf("2:pop\n");
    printf("3:peek\n");
    printf("4:peep:\n");
    printf("5:change\n");
    printf("6:show\n");
    printf("7:exit\n");
    while (1)
    {
        printf("\nenter choise:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            peep();
            break;
        case 5:
            change();
            break;
        case 6:
            show();
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("enter valid choice");
        }
    }
}
void push()
{
    int item;
    if (top == maxsize)
    {
        printf("stack is full");
    }
    else
    {
        printf("insert element in stack");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    int f, null;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("poped %d", stack[top]);
        f = stack[top];
        stack[top] = null;
        top--;
    }
}
void peek()
{
    int item;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top value of stack is %d", stack[top]);
    }
}

void peep()
{
    int item, i;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("enter the index number which you want to see: ");
        scanf("%d", &i);
        printf("ith value of stack is %d", (stack[top] - i+1));
    }
}
void change()
{
    int v1, v2;
    printf("\nEnter Position for change : ");
    scanf("%d", &v1);
    printf("\nEneter the Number for change : ");
    scanf("%d", &v2);
    if (top - v1 <= -1)
    {
        printf("\nenter valid position!!!");
    }
    else
    {
        stack[top - v1] = v2;
        printf("\nCHANGE successfull !!!");
    }
}
void show()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack element is : \n");
        for (i = top; i >= 0; i--)
        {
            printf("%d  ", stack[i]);
        }
    }
}