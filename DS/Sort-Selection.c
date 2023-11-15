#include<stdio.h>

void main(){
    int n, i, j, temp, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("Enter element at index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array is: ") ;   
    for(int i=0 ; i<n ; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        min = i;
        for(j= i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i]= arr[min];
        arr[min] = temp;
    }
    printf("Sorted array is: ") ;   
    for(int i=0 ; i<n ; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}