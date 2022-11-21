// deleting the first node of the single linked list
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
struct node* del_first(struct node *head){
    if(head==NULL)
    printf("list is already empty1");
    else{
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
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
    head=del_first(head);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}