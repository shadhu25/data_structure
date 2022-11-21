// counting the nodes of single linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count=0;
    if(head==NULL){
    printf("linked list is empty");}
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("%d\n",count);
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
    count_of_nodes(head);
    return 0;
}