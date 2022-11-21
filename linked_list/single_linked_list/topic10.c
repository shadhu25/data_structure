// inserting a element at cirtain position of array
#include<stdio.h>
void add_at_pos(int arr[],int arr2[],int n,int data,int pos){
    int i;
    int index=pos-1;
    for(i=0;i<index-1;i++){
    arr2[i]=arr[i];
    }
    arr2[index]=data;
    int j;
    for(i=index+1,j=index;i<n+1,j<n;i++,j++){
    arr2[i]=arr[j];
    }
}
int main(){
    int arr[]={1,2,34,77,6,7,90,67,23,38};
    int pos=5,data=6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[size+1];
    add_at_pos(arr,arr2,size,data,pos);
    for(int i=0;i<size+1;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}