// deleting in the beginning of the array
#include<stdio.h>
int del_first(int arr[],int n){
    int i;
    if(n==0){
        printf("array is empty");
        return n;
    }
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}
int main(){
    int arr[8];
    int n,i;
    printf("enter the number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    n=del_first(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}