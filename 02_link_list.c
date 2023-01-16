#include <stdio.h>
#include <stdlib.h>

struct node
{
    int var;
    struct node *next;
};
void printlist(struct node *ptr)
{
    while (ptr != NULL)
    {

        printf("element : %d \n", ptr->var);
        ptr = ptr->next;
    }
}

struct node *insertat_first(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->var = data;
    ptr->next = first;
    return ptr;
};

struct node *insertinindex(struct node *first, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = first;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->var = data;
    ptr->next = p->next;
    p->next = ptr;
    return first;
};

struct node *insertEnd(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->var = data;
    struct node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return first;
};

struct node *insertafter(struct node *first, struct node *pre, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->var = data;
    ptr->next = pre->next;
    pre->next = ptr;

    return first;
};

struct node *delete_first_node(struct node *first)
{
    struct node *p = first;
    first = first->next;
    free(p);

    return first;
};

struct node *delete_at_index(struct node *first, int index)
{
    struct node *p = first;
    struct node *q = first->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    free(q);

    return first;
};

struct node *delete_last_node(struct node *first)
{
    struct node *p = first;
    struct node *q = first->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return first;
};


struct node *delete_at_value(struct node *first, int value)
{
    struct node *p = first;
    struct node *q = first->next;
    int i = 0;
    while (q->var != value && q->next != NULL){
        p = p->next;
        q = q->next;  
    }

    if (q->var==value )
     {
        p->next=q->next;
        free(q);
     }
    return first;
};

int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *four;
    struct node *five;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    first->var = 10;
    first->next = second;

    second->var = 29;
    second->next = third;

    third->var = 32;
    third->next = four;

    four->var = 66;
    four->next = five;

    five->var = 77;
    five->next = NULL;

    printlist(first);
    printf("\n");

    // first = insertat_first(first, 01);
    // first =insertinindex(first,11,1);
    // first = insertEnd(first,44);
    // first = insertafter(first,second,100);
    // first = delete_first_node(first);
    // first = delete_at_index(first,3);
    // first = delete_last_node(first);
    // first = delete_at_value(first,66);

    printlist(first);

    return 0;
}