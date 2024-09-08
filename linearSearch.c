#include<stdio.h>
#include<stdlib.h>
int main()
{
    int item,i=0;
    int a[5]={12,13,16,15,99};
    printf("enter searching item:");
    scanf("%d",&item);
    while(i<5)
    {
        if(a[i]==item)
        {
            printf("item found at %d",i);
            exit(0);
        }
        i++;

    }
    if(i>=5)
    {
        printf("item not found");
        exit(0);
    }
    return 0;
}