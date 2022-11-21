// inserting a node at the cirtain position of the single linked list
#include<stdio.h>
#include<stdlib.h>.
struct node{
    int data;
    struct node *link;
};
struct node* add_at_end(struct node *ptr, int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
void add_at_pos(struct node *head,int data,int position){
    struct node *ptr=NULL;
    ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    while(position!=2){
        head=head->link;
        position--;
    }
    ptr->link=head->link;
    head->link=ptr;
}

int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=head;
    ptr=add_at_end(ptr,98);
    ptr=add_at_end(ptr,3);
    ptr=add_at_end(ptr,67);
    int data=98,position=3;
    add_at_pos(head,data,position);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}