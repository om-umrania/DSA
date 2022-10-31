#include <stdio.h>
#include <stdlib.h>

void Push();
void Pop();
void Show();
int Size = 4;
int Top = -1;
int stack_array[4];

void Push()
{
    int x;
    if (Top == Size - 1)
        printf("No Enough space\n");
    else
    {
        printf("\nEnter the element to be inserted to the stack: ");
        scanf("%d", &x);
        Top++;
        stack_array[Top] = x;
    }
}

void Pop()
{
    int x;
    if (Top == -1)
    {
        printf("Nothing to Pop Out\n");
    }
    else
    {
        printf("\nPopped element:  %d", stack_array[Top]);
        Top--;
    }
}

void Show()
{
    if (Top == -1)
        printf("\nNo Element to Display");
    else
    {
        printf("Elements in the stack:\n");
        for (int i = 0; Top >= i; i++)
        {
            printf("%d\n", stack_array[i]);
        }
    }
}
int main(void)
{
    int condition = 1;
    int choice;
    printf("Hello Everyone, this is the program to show the implementation of Stack.\nWhich uses the principle Last In First Out");

    while (condition == 1)
    {
        printf("\nPress 1 for add new element in stack");
        printf("\nPress 2 for remove last element in stack");
        printf("\nPress 3 to show all the elements in stack");
        printf("\nPress 4 to exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Show();
            break;
        case 4:
            printf("Program Exit");
            condition = 0;
            break;
        default:
            break;
        }
    }
}