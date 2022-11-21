// inserting node at the beginning of the single linked list: 2.0
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head= malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;
    int data=3;
    add_at_beg(&head,data);
    ptr=head;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}

void add_at_beg(struct node **head,int d){
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;
    ptr->link=*head;
    *head=ptr;
}