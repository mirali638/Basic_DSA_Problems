#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={12,13,16,88,99};
    int low=0,up=4,mid,item,f=0,i;

    printf("enter searching item:");
    scanf("%d",&item);
    while(low<=up)
    {
        mid=(low+up)/2;
        if(a[mid]==item)
        {
            f=1;
            break;
        }
        if(a[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            up=mid-1;
        }
    }
    if(f==1)
    {
        printf("item found at %d",mid);
    }
    else
    {
       printf("item not found");
    }
    return 0;
}