#include <stdio.h>
#define max 5

void enqueue();
void dequeue();
void display();
void exit();
int a[max], rear = - 1, front = - 1;

int main()
{
    int ch;
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        while(1)
        {
           printf("Enter your choice of operations : ");
           scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
 
void enqueue()
{
    int data;
    if (rear == max - 1)
       printf("Overflow \n");
    else
    {
        if (front == - 1)
        {
        front = 0;
        }
        printf("\nenter Element to be inserted in the Queue: ");
        scanf("%d", &data);
        rear = rear + 1;
        a[rear] = data;
    }
} 
 
void dequeue()
{
    if (front == - 1 || front == rear)
    {
        printf("Underflow \n");
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", a[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}