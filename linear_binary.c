#include <stdio.h>
#include <stdlib.h>
void linear(int arr[], int size, int element)
{
      for (int i = 0; i < size; i++)
      {
            if (arr[i] == element)
            {
                  printf("%d", i);
            }
      }
     
}

int binary(int arr[], int size, int element)
{
      int low = 0;
      int high = size-1;
      
      while (low <= high)
      {
            int mid = (low + high) / 2;
            if (arr[mid] == element)
            {
                  return mid;
            }
            else if (arr[mid] <= element)
            {
                  low = mid + 1;
            }
            else
            {
                  high = mid - 1;
            }
      }
      return -1;
}

int main()
{
      int arr[] = {1, 33, 55, 77, 88, 99, 100, 101};
      int size = sizeof(arr) / sizeof(int);
      int element = 100;
      int b= binary(arr, size, element);
      printf("%d",b);
      return 0;
}