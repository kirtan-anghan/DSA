#include <stdio.h>
#include <stdlib.h>

struct node
{
    int var;
    struct node *next;
};
void print(struct node *ptr)
{
    while (ptr != NULL)
    {
    printf("element : %d \n", ptr->var);
    ptr = ptr->next;
      
    }
    
}
int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *four;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    first->var = 12;
    first->next = second;

    second->var = 29;
    second->next = third;

    third->var = 32;
    third->next = four;

    four->var = 36;
    four->next = NULL;

    print(first);

    return 0;
}