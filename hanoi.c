#include <stdio.h>

void tower(int n, char beg, char aux, char end);

int main()
{
    int n;
    printf("\nEnter the number of discs:");
    scanf("%d", &n);
    printf("tower of hanoi of %d disc\n",n);
    tower(n, 'A', 'B', 'C');
    return 0;
}

void tower(int n, char beg, char aux, char end)
{
    if(n<=0)
    {
        printf("illegal entry\n");
    }
    else if (n == 1)
        printf("\n Move disk from %c to %c", beg,end);
    else
    {
        tower(n - 1, beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }
}
