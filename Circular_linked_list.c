#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct cll
{
    char data;
    struct cll *link;
};
struct cll *head = NULL;

void insert(char ch);
void print();

int main()
{
    int option;
    char ch;
    while(1)
    {
        printf("1.insert\n2.print\n3.exit\nEnter the option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: printf("Enter the character: ");
            __fpurge(stdin);
            scanf("%c", &ch);
            insert(ch);
            break;
            case 2: print();
            break;
            case 3: exit(0);
            break;
        }
    }

    return 0;
}

void insert(char ch)
{
    struct cll *temp;
    struct cll *new = (struct cll *)malloc(sizeof(struct cll));
    if(new == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new->data = ch;
        new->link = NULL;
        if(head == NULL)
        {
            head = new;
        }
        else
        {
            temp = head;
            while(temp->link != head)
            {
                temp = temp->link;
            }
            temp->link = new;
            new->link = head;
        }
    }
}

void print()
{
    struct cll *temp;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        while(temp != head)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
