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
    for(i=0; i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    int low, high, mid, num, flag=0;
    printf("Enter element to search in array: ");
    scanf("%d", &num);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid] == num){
            flag=1;
            break;
        }
        else if(num<arr[mid]){
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    if(flag==1){
        printf("Element present in list");
    }
    else{
        printf("Element not present in list");
    }
}