// creating a single linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=55;
    current->link=NULL;
    head->link=current;

    /*  we also use it but here is wastage of memory du to extra pointers
    struct node *current2=malloc(sizeof(struct node));
    current2->data=65;
    current->link=current2;*/

    current=malloc(sizeof(struct node));
    current->data=65;
    current->link=NULL;
    head->link->link=current;
    return 0;
}