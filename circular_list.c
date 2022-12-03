#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;

    struct node *next;
};

void printlist(struct node *head)
{
    struct node *ptr = head;

    do
    {

        printf("element : %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
};

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *four;
    struct node *five;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 29;
    second->next = third;

    third->data = 32;
    third->next = four;

    four->data = 66;
    four->next = five;

    five->data = 77;
    five->next = head;

    printlist(head);
    printf("\n");
    head = insert_at_first(head, 01);
    printlist(head);
    return 0;
}