// insertion after the given position [video-68]
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
void addAfterPos(struct node *head,int data,int position){
    struct node *temp=head;
    struct node *temp2=NULL;
    struct node *new=NULL;
    new=addToEmpty(new,data);
    while(position!=1){
        temp=temp->next;
        position--;
    }
    if(temp->next==NULL){
        temp->next=new;
        new->prev=temp;
    }
    else{
        temp2=temp->next;
        temp->next=new;
        temp->next->prev=temp; // new->prev=temp
        temp->next->next=temp2; // new->next=temp2
        temp2->prev=new;
    }
}
int main(){
    struct node *head=NULL;
    struct node *ptr=NULL;
    head=addToEmpty(head,45);
    addAtEnd(head,25);
    addAtEnd(head,9);
    int pos=2;
    addAfterPos(head,25,pos);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}