#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void push(struct node *head , int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;

    if(head != NULL)
      head->prev = ptr;
    
    head = ptr;
}
void listtraversal(struct node * head){
    struct node *ptr = head;
    do{
        printf("element is %d\n", ptr->data);
        ptr= ptr->next;

    }while(ptr!= head);
}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    listtraversal(head);
    push(head,1111);
    printf("new list print \n");
    listtraversal(head);
     return 0;
}