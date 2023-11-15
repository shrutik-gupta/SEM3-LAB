#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node{
    int data;
    struct node *next;
};
struct node *head;

void main(){
    int choice=0;
    printf("----------STACK USING LINKED LIST----------\n");
    while(choice!=4){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                push();
                break;
            
            case 2: 
                pop();
                break;
            
            case 3: 
                display();
                break;
            
            case 4: 
                printf("Exiting the program...\n");
                break;
            
            deafault: 
                printf("Enter valid choice\n");
                break;        
        }
    }
}

void push(){
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to be inserted at stack: ");
    scanf("%d", &item);
    ptr -> data = item;
    ptr -> next = head;
    head = ptr;
}

void pop(){
    struct node *ptr;
    if(head==NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        ptr = head;
        head = ptr -> next;
        free(ptr);
    }
}

void display(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("Nothing to print\n");
    }
    else{
        printf("TOP -> ");
        while(ptr!=NULL){
            printf(" %d ", ptr -> data);
            ptr = ptr -> next;
        }
    }
}
