// inserting a node at the end of the single linked list method 1
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void add_at_beg(struct node *head, int data1){
    struct node *temp,*ptr;
    ptr=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data1;
    temp->link=head;
    head=temp;
    return head;

}

void print_data(struct node *head){
    if(head==NULL){
    printf("linked list is empty");}
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}


int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=55;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=65;
    current->link=NULL;
    head->link->link=current;
    add_at_beg(head,75);
    print_data(head);
    return 0;
}