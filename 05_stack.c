#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isempty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,int value){
    if(isfull(ptr)){
        printf("stack overflow! cannot push %d\n",value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
    printf("stack underflow! cannot pop \n");
    return -1;
    }
    else{
        int value =ptr->arr[ptr->top];
        ptr->top--;
        printf("popped %d\n",value);
        return value;
    }
}
int peek(struct stack *sp,int i){
int arrindex = sp->top-i+1;
if(arrindex < 0){
    printf("not a valid position in stack\n");
    return -1;
}
else{
    return sp->arr[arrindex];
}
}
void printstack(struct stack *sp){
 for(int j= 1; j <= sp->top+1; j++){
        printf("the value at position %d is %d\n",j , peek(sp,j));
    }
}
int main(int argc, char const *argv[])
{
    struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created \n");
    push(sp,01);
    push(sp,02);
    push(sp,03);
    push(sp,04);
    push(sp,05);
    push(sp,06);
    // push(sp,07);
    // push(sp,09);
    // push(sp,10);
    // pop(sp);
    printstack(sp);
    // printf("%d",peek(sp , 1));
    // printf("%d",peek(sp , 2));
    // printf("%d",peek(sp , 3));
    // printf("%d",peek(sp , 4));
    // printf("%d",peek(sp , 5));
    // printf("%d",peek(sp , 6));
    // printf("%d",peek(sp , 7));

    return 0;

}
