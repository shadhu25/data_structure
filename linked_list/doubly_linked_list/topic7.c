// creating an entire DDL [video-70]
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* addToEmpty(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
void addAtEnd(struct node *head,int data){
    struct node *temp,*tp;
    temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next!=NULL)
        tp=tp->next;
    tp->next=temp;
    temp->prev=tp;
}
struct node* creatList(struct node *head){
    int n,data,i;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    if(n==0)
        return head;
    printf("Enter the element for node 1: ");
    scanf("%d",&data);
    head=addToEmpty(head,data);
    for(i=1;i<n;i++){
        printf("Enter the element for node %d: ",i+1);
        scanf("%d",&data);
        addAtEnd(head,data);
    }
    return head;
}
int main(){
    struct node *head=NULL;
    struct node *ptr;
    head=creatList(head);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}