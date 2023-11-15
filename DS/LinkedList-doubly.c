#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int data;
    struct noed *right;
};
struct node *head;

void begin_insert();
void last_insert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();

void main(){
    int choice=0;
    while(choice!=8){
        printf("What you want to do?\n1. Insert at begining\n2. Insert at end\n3.Insert at middle\n4.Delete from begining\n5.Delete from end\n6.Delete from middle\n7.Display the list\n8. Exit program\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            random_insert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            display();
            break;
        case 8:
            printf("Exiting the program...\n");
            break;
        
        default:
            printf("Enter valid choice!!\n");
            break;
        }
    }
}

void begin_insert(){
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter item to be inserted: ");
    scanf("%d", &item);

    ptr -> left = NULL;
    ptr -> data = item;
    ptr -> right = head;
    head = ptr;
}

void last_insert(){
    int item;
    struct node *ptr, *temp;
    ptr= (struct node *)malloc(sizeof(struct node));
    printf("Enter item to be inserted: ");
    scanf("%d", &item);
    ptr ->data = item;
    ptr ->left = NULL;
    ptr ->right = NULL;
    temp = head;
    while(temp ->right != NULL){
        temp = temp ->right;
    }
    temp ->right = ptr;
    ptr ->left = temp;
    ptr ->right = NULL;
}

void random_insert(){
    int item, loc;
    struct node *ptr, *prev, *temp;
    ptr= (struct node *)malloc(sizeof(struct node));
    printf("Enter location after which you want to insert: ");
    scanf("%d", &loc);
    printf("Enter item to be inserted: ");
    scanf("%d", &item);
    ptr ->data = item;
    ptr ->left = NULL;
    ptr ->right = NULL;
    temp = head;
    for(int i=0; i<loc; i++){
        prev = temp;
        temp = temp ->right;
    }
    prev -> right = ptr;
    ptr -> left = prev;
    ptr -> right = temp;
    temp -> left = ptr;
} 

void begin_delete(){
    struct node *ptr;
    if(head == NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        ptr = head;
        head = ptr -> right;
        ptr -> right = NULL;
        free(ptr);
    }
}

void last_delete(){
    struct node *ptr, *temp;
    if(head == NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        ptr = head;
        while(ptr -> right != NULL){
            ptr = ptr -> right;
        }
    }
}

void random_delete(){
    struct node *ptr, *prev, *temp;
    int loc;
    if(head ==NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        printf("Enter location after which you want to delete: ");
        scanf("%d", &loc);
        ptr = head;
        for(int i=0; i<loc; i++){
            prev = ptr;
            ptr = ptr -> right;
        }
        temp = ptr;
        ptr = ptr -> right;
        prev -> right = ptr;
        ptr -> left = prev;
        temp ->left = NULL;
        temp -> right = NULL;
        free(temp);
    }
}

void display(){
    struct node *ptr;
    ptr= head;
    if(ptr==NULL){
        printf("Nothing to print\n");
    }
    else{
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr= ptr->right;
        }
        printf("\n");
    }
}