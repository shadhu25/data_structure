#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("please enter the number of integers : ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter an enteger : ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
    }
    return 0;
}

