// deleing the first node of the list [video-71]
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
struct node* delFirst(struct node *head){
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;
    return head;
}
void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
int main(){
    struct node *head=NULL;
    struct node *ptr;
    head=addToEmpty(head,34);
    addAtEnd(head,45);
    addAtEnd(head,9);
    printf("Before Deletion: \n");
    print(head);
    head=delFirst(head);
    printf("After Deletion: \n");
    print(head);
    return 0;
}