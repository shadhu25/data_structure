// deleting the node at a particular position the single linked list
#include<stdio.h>
#include<stdlib.h>
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
void del_pos(struct node **head,int position){
    struct node *current=*head;
    struct node *previous=*head;
    if(*head==NULL)
    printf("list is already empty");
    else if(position==1){
        *head=current->link;
        free(current);
        current=NULL;
    }
    else{
        while(position!=1){
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
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
    int position=3;
    del_pos(&head,position);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}