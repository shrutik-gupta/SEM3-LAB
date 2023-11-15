#include<stdio.h>

void main(){
    int n, temp, j;
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
    for(int i=1; i<n ; i++){
        temp = arr[i];
        j = i-1;
        while(temp < arr[j] && j>=0){
            arr[j+1] = arr[j] ;
            //element x agar apne previous element y (y stored in temp) se chhota hai toh x ek aage move karega in place of y) 
            j--;
        }
        arr[j+1] = temp;
    }
    printf("Sorted array is: ") ;   
    for(int i=0 ; i<n ; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}