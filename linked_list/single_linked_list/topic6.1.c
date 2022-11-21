// inserting a element at the end of the array : array is not full
#include<stdio.h>
int main(){
    int a[10];
    int i,n,freepos;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    freepos=n;
    freepos=add_at_end(a,freepos,65);
    for(i=0;i<freepos;i++)
    printf("%d ",a[i]);
    return 0;
}

int add_at_end(int a[], int freepos, int data){
    a[freepos]=data;
    freepos++;
    return freepos;
}