// inserting a node at end [video-67]
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
int main(){
    struct node *head=NULL;
    struct node *ptr=NULL;
    head=addToEmpty(head,45);
    addAtEnd(head,9);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}