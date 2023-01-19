#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, char value)
{
    if (isfull(ptr))
    {
        printf("stack is overflow! i can not help");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
char pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack is underflow! i can not help");
        return -111;
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int parenthesismatch(char *exp)
{
    struct stack *t;
    t->size = 10;
    t->top = -1;
    t->arr = (char *)malloc(t->size  * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(t, '(');
        }
        else if (exp[i] == ')')
        {
            if (isempty(t))
            {
               return 0;
            }
            pop(t);
        }
    
    }

    if(isempty(t))
    {
        return 1;
    }else{
        return 0;
    }
}

    int main()
    {
        char *exp="((8)(*--$$9))";
if(parenthesismatch(exp)){
    printf("the parenthesis is matched");

}else{
    printf("the parenthesis is not matched");
}
        return 0;
    }