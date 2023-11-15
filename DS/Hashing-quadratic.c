// Quadratic Hashing
#include <stdio.h>
int arr[100], size;
void insert(int value)
{
    int pos = -1, j = -1;
    pos = ((value % size) + 0) % size;
    if (arr[pos] != -1)
    {
        while (j != size)
        {
            j++;
            pos = ((value % size) + j * j) % size;
            if (arr[pos] == -1)
            {
                arr[pos] = value;
                printf("\nValue Inserted %d at index %d", value, pos);
                break;
            }
        }
        if (j == size)
        {
            printf("\nCannot Insert the Element\n");
        }
    }
    else
    {
        arr[pos] = value;
        printf("\nValue Inserted %d at index %d", value, pos);
    }
}
void search(int value)
{
    int pos = -1, j = 0;
    pos = ((value % size) + 0) % size;
    if (arr[pos] != value)
    {
        while (j != size)
        {
            pos = ((value % size) + j * j) % size;
            if (arr[pos] == value)
            {
                printf("\nElement %d found at index %d\n", value, pos);
                break;
            }
            else if (j == size && arr[pos] != value)
            {
                printf("\nElement %d not found\n", value);
                break;
            }
            j++;
        }
    }
    else
    {
        printf("\nElement %d found at index %d\n", value, pos);
    }
}
void main()
{
    int exit = 1, choice, value;
    printf("Enter the size of array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = -1;
    }
    while (exit == 1)
    {
        printf("\nEnter the Choice:\n1.Insert\n2.Search an Element\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to insert:");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            printf("Enter the value to search:");
            scanf("%d", &value);
            search(value);
            break;
            break;
        case 3:
            printf("The array elements are:\n [");
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == -1)
                {
                    printf(" ,");
                }
                else
                    printf("%d,", arr[i]);
            }
            printf("]");
            break;
        case 4:
            exit = 0;
            break;
        }
    }
}
