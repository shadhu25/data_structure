// inserting a element at the end of the array : array is full
#include<stdio.h>
int main(){
    int a[4];
    int i, n, freepos;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int size=sizeof(a)/sizeof(a[0]);
    freepos=n;
    if(n==size)
    {
        int b[size+2];
        freepos=add_at_end(a,b,size,freepos,65);
        for(i=0;i<freepos;i++)
        printf("%d ",b[i]);
    }
    return 0;
}

int add_at_end(int a[], int b[], int n, int freepos, int data){
    int i;
    for(i=0;i<n;i++){
        b[i]=a[i];
        b[freepos]=data;
        freepos++;
        return freepos;
    }
}