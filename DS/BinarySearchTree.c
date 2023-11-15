#include<stdio.h>
#include<stdlib.h>
int item;

struct node{
    struct node *right;
    int data;
    struct node *left;
};
struct node *root, *ptr;

int create(struct node *r, struct node *ptr);
int inorder(struct node *ptr);
int preorder(struct node *ptr);
int postorder(struct node *ptr);

void main(){
    int choice=0;
    printf("-----BINARY SEARCH TREE-----");
    while(choice!=5){
        printf("\n1. Enter an element\n2. Inorder traversal\n3. Preorder traversal\n4. Postorder traversal\n5. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &item);
                ptr = (struct node *)malloc(sizeof(struct node));
                ptr -> data = item;
                ptr -> left = NULL;
                ptr -> right = NULL;
                if(root==NULL){
                    root = ptr;
                }
                else{
                    create(root, ptr);
                }
                break;

            case 2: 
                inorder(root);
                break;

            case 3: 
                preorder(root);
                break;

            case 4: 
                postorder(root);
                break;

            case 5:
                printf("Exiting the program...\n");
                break;
                
            default:
                printf("Enter valid choice...\n");
                break;
        }
    }
}

int create(struct node *r, struct node *ptr){
    if(ptr ->data < r->data ){
        if(r -> left == NULL){
            r -> left = ptr;
        }
        else{
            create(r->left, ptr);
        }
    }
    else if(ptr ->data > r->data ){
        if(r -> right == NULL){
            r -> right = ptr;
        }
        else{
            create(r->right, ptr);
        }
    }
    else{
        printf("Duplicate entry!!!\n");
    }
    return 0;
}

int inorder(struct node *ptr){
    if(ptr != NULL){
        inorder(ptr->left);
        printf(" %d ", ptr->data);
        inorder(ptr->right);
    }
}

int preorder(struct node *ptr){
    if(ptr != NULL){
        printf(" %d ", ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

int postorder(struct node *ptr){
    if(ptr != NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf(" %d ", ptr->data);
    }
}