#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}; 
struct node *top = NULL;

void listtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top,int value){
    if(isfull(top)){
        printf("stack is overflow\n");\
        return 0;
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = value;
        p->next=top;
        top = p;
        return top;
    }
    
}

int pop(struct node * p ){
    if(isempty(p)){
        printf("stack underflow\n");
        return -1;
    }
    else{
        struct node* n = p;
        top = p->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(int index){
    struct node* ptr = top;
    for(int i  = 0;(i<index-1 && ptr!=NULL); i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    top = push(top,01);
    top = push(top,02);
    top = push(top,03);
    top = push(top,04);
    listtraversal(top);
    int t= pop(top);
    printf("after pop element %d\n", t);
    listtraversal(top);
    int y =peek(1);
    printf("peek %d\n", y);

    return 0;
}
