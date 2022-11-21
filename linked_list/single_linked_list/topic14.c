// deleting the last element of the array
#include<stdio.h>
int main(){
    int arr[]={2,3,5,7,4,88,76,58,656,98};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    size=size-1;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}