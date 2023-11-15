#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
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
    struct node *ptr;
    int item;
    ptr= (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW!\n");
    }
    else{
        printf("Enter item to insert at begining: ");
        scanf("%d", &item);
        ptr->data= item;
        ptr->next=head;
        head= ptr;
        printf("\nNode inserted at begining\n\n");
    }
}

void last_insert(){
    struct node *ptr, *temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW!\n");
    }
    else{
        printf("Enter item to insert at last: ");
        scanf("%d", &item);
        ptr->data= item;
        ptr->next= NULL;
        temp= head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= ptr;
        ptr->next= NULL;
        printf("Node inserted at last\n");
    }
}

void random_insert(){
    struct node *ptr, *temp;
    int item, loc;
    ptr= (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW!\n");
    }
    else{
        printf("Enter index after which you want to insert node: ");
        scanf("%d", &loc);
        printf("Enter item to be inserted at index %d: ", loc);
        scanf("%d", &item);
        ptr->data= item;
        ptr->next= NULL;
        temp= head;
        for(int i=0; i<loc; i++){
            temp= temp->next;
        }
        ptr->next= temp->next;
        temp->next= ptr;
        printf("Node inserted at position %d\n", loc+1);
    }
} 

void begin_delete(){
    struct node *temp;
    if(head==NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        temp= head;
        head= temp->next;
        free(temp);  
        printf("Node deleted from begining\n");
    }
}

void last_delete(){
    struct node *temp, *prev;
    if(head==NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        temp= head;
        while(temp->next!= NULL){
            prev= temp;
            temp= temp->next;
        }
        prev->next= NULL;
        free(temp);
        printf("Node deleted from last\n");
    }
}

void random_delete(){
    struct node *temp, *prev;
    int loc;
    if(head==NULL){
        printf("UNDERFLOW!");
    }
    else{
        printf("Enter index after which you want to delete: ");
        scanf("%d", &loc);
        temp= head;
        for(int i=0; i<loc; i++){
            prev= temp;
            temp= temp->next;
        }
        prev-> next= temp-> next;
        free(temp);
        printf("Node deleted from middle\n");
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
            ptr= ptr->next;
        }
        printf("\n");
    }
}