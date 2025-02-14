#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* createnode(int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

struct node* insertend(struct node* head,int data)
{
    struct node* newnode=createnode(data);
    if(head==NULL)
    return newnode;
    struct node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    return head;
}
 
struct node* insertionsort(struct node* head)
{
    if(head==NULL || head->next==NULL)
    return head;

    struct node* sorted = NULL;
    struct node* current=head;

    while(current!=NULL)
    {
        struct node* next=current->next;
        if(sorted==NULL || sorted->data >= current->data)
        {
            current->next=sorted;
            sorted=current;
        }else{
            struct node* temp = sorted;
            while(temp->next != NULL && temp->next->data < current->data){
                temp=temp->next;
            }
            current->next=temp->next;
            temp->next=current;
        }
        current=next;
    }
    return sorted;
}