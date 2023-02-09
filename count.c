#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int max(int a[],int n)
{
    int max = INT_MIN;
    for(int i = 0 ; i< n ; i++)
    {
        if(max < a[i]) max=a[i];
    }

    return max;
}
void countsort(int a[],int n){
    int m = max(a,n);
    int i , j;
    int* c = (int *)malloc((m+1)*sizeof(int));

    for ( i = 0; i < m+1; i++)
    {
        c[i]=0;
    }
    for(i=0; i<n ; i++)
    {
        c[a[i]]= c[a[i]]+1;
    }
    i= 0,j=0;
    while (i<=m)
    {
        if(c[i]>0)
        {
            a[j]=i;
            c[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    
    
} 


int main(){

    int a[]={34,54,34,3,45,34,6,56,43,65,587429659};
    int n=sizeof(a)/sizeof(a[0]);
    printArray(a,n);
    countsort(a,n);
    printArray(a,n); 
     return 0;
}