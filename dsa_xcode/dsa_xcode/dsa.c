//
//  dsa.c
//  cardwar
//
//  Created by kirtan Anghan on 25/11/22.
//

#include "dsa.h"

#include<stdio.h>
#include<stdlib.h>


void printarr(int arr[],int size){
    for ( int i = 0; i <= size-1; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}


int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
 
    printarr(arr,size);

     return 0;
}
