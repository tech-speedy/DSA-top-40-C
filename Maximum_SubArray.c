#include<stdio.h>

int maxSubArray(int arr[], int size){
    int max_current = arr[0];
    int max_global = arr[0];

    for(int i = 0; i < size; i++){
       if (arr[i] > max_current + arr[i]){
         max_current = arr[i];
       } else {
         max_current = max_current + arr[i];
       }

       if (max_current > max_global){
          max_global = max_current;
       }
    }
    return max_global;
}

int main(){
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  int max_sum = maxSubArray(arr, size);
  printf("Maximum subarray sum is: %d\n", max_sum);

  return 0;
}
