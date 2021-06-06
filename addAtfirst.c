#include<stdio.h>
#include<stdlib.h>
struct node{
       int data;
       struct node *link;
       };
//Adding an element to the linked list at begining.
struct node* addAtbeg(struct node* head,int d){
       struct node *ptr=malloc(sizeof(struct node));
       ptr->data=d;
       ptr->link=head;
       return ptr;
       }
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;
    int data=3;
    head=addAtbeg(head,data);
    while(head!=NULL){
                     printf("%d ",head->data);
                     head=head->link;            
                     }
    getch();
    return 0;
}
