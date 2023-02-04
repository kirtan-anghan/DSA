#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int a[],int low, int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
do{
    while(a[i] <= pivot)
    {
        i++;
    }
    while(a[j] > pivot)
    {
        j--;
    }
    if(i < j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i < j);

temp = a[low];
a[low] = a[j];
a[j] = temp;
return j;
}
void quicksort(int a[],int low ,int high)
{
   int  part;
   if(low<high){
    part = partition(a,low,high);
    quicksort(a,low,part-1);
    quicksort(a,part+1,high);
   }
}


int main(){
    int a[]={9,3,45,32,1,343,32424,24,24,23,4,23,4,234,2,4,2,34,2};
    int n = sizeof(a)/sizeof(a[0]);
    printArray(a,n);
    quicksort(a,0,n-1);
    printArray(a,n);
     return 0;
}