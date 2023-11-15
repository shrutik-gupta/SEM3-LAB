#include<stdio.h>
int stack[100], top=-1, n, choice=0;
void push();
void pop();
void display();

void main(){
    printf("Enter size of array: ");
    scanf("%d", &n);
    int stack[n];
    while(choice!=4){
        printf("Enter operation\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if(top<n-1){
                push();
            }
            else{
                printf("Stack overflow\n");
            }
            break;
        case 2:
        if(top>=0){
            pop();
        }
        else{
            printf("Stack underflow\n");
        }
        break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program...\n");
            break;
        
        default:
            printf("Choose valid number\n");
            break;
        }
    }
}

void push(){
    int item;
    printf("Enter value you want to insert: ");
    scanf("%d",&item);
    top++;
    stack[top]= item;
}

void pop(){
    int val;
    val= stack[top];
    top--;
    printf("Deleted %d from stack\n", val);
}

void display(){
    for(int i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("<- TOP\n");
}