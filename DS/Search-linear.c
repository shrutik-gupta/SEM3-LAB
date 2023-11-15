#include<stdio.h>

void main(){
    int n, item, flag=0;
    printf("Enter sixe of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element to be inserted at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be searched in the array: ");
    scanf("%d", &item);
    for(int i=0; i<n; i++){
        if(item == arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element present in array\n");
    }
    else{
        printf("Element not present in array\n");
    }
}