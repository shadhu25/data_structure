// creating a node [video-64]
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=10;
    head->next=NULL;
    return 0;
}