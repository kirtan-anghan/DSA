#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
}

int isempty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct queue *q)
{
    if(q->r==size-1)
    {
        return 1;
    }
    return 0;
}

void dequeue(struct queue *q)
{
    int a = -1;
    if(isempty(q))
    {
        printf("this queue is empty \n");
    }
    else{
        q->f++;
        a = q->arr[q->f]
   }
   return a;
}
void enqueue(struct quene *q,int val){
    if(isfull(q)){
        printf("this queue is full \n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("enqueue element is: %d\n",val);
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
