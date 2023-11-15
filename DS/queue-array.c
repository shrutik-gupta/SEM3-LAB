#include<stdio.h>
int queue[100], n, choice=0, front=-1, rear=-1, item, val;
void enqueue();
void dequeue();
void display();
void main(){
    printf("Enter size of queue: ");
    scanf("%d", &n);
    int queue[n];
    while(choice!=4){
        printf("Enter operation\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if(rear<n-1){
                enqueue();
            }
            else{
                printf("Queue overflow\n");
            }
            break;
        case 2:
            if(front>=0){
                dequeue();
            }
            else{
                printf("Queue underflow\n");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program...\n");
            break;
        default: 
            printf("Enter valid choice\n");
            break;
        }
    }
}

void enqueue(){
    printf("Enter the value you want to insert: ");
    scanf("%d", &item);
    if(front==-1){
        front=0; rear=0;
    }
    else{
        rear++;
    }
    queue[rear]= item;
}

void dequeue(){
    val= queue[front];
    if(front==rear){
        front=-1; rear=-1;
    }
    else{
        front++;
    }
    printf("deleted %d from the queue\n", val);
}

void display(){
    printf("FRONT->");
    for(int i=0; i<=front+1; i++){
        printf(" %d ", queue[i]);
    }
    printf("<-REAR\n");
}