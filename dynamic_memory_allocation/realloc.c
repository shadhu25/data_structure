#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *ptr=(int*)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
        exit(1);
    }
    for(i=0;i<2;i++)
    {
        printf("enter an enteger : ");
        scanf("%d",ptr+i);
    }
    // reallocating te memory
    ptr=realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
        exit(1);
    }
    printf("enter two more entegers : \n");
    for(i=2;i<4;i++)
    {
        
        scanf("%d",ptr+i);
    }
    printf("displayin all engegers\n");
    for(i=0;i<4;i++)
    {
        printf("%d \n",*(ptr+i));
    }
    return 0;
}

