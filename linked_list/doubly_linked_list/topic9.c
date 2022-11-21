// deletig the last nodeof the list [video-72]
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
void delLast(struct node *head){
    struct node *temp=head;
    struct node *temp2=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    temp=NULL;
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
    delLast(head);
    printf("After Deletion: \n");
    print(head);
    return 0;
}