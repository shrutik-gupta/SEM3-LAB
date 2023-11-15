#include <stdio.h>

int fact(int n);
int fibo(int n);
int fibolist(int n);

void main()
{
    int choice = 0, n;
    int arr[100];
    while (choice != 4){
        printf("\n1.Factorial of a number\n2.Fibonacci of an index\n3.Fibonacci list\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("The factorial of %d is %d", n , fact(n));
                break;
            case 2:
                printf("Enter an index: ");
                scanf("%d", &n);
                printf("The fibonacci of index %d is %d", n , fibo(n));
                break;

            case 3:
                printf("Enter an index: ");
                scanf("%d", &n);
                fibolist(n);
                break;

            case 4: 
                printf("Exiting...");
                break;

            default:
                printf("Enter valid choice\n");
                break;
        }
    }
}

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}

int fibolist(int n){
    for(int i=0; i<n; i++){
        printf(" %d ", fibo(i));
    }
    return 0;
}