/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *link;
};
struct sll *head = NULL;
void insert(int data);
void print();
int main()
{
    int data, option;
    while(1)
    {
        printf("1.insert\n2.print\n3.exit\nEnter the option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: printf("Enter the data: ");
            scanf("%d", &data);
            insert(data);
            break;
            case 2: print();
            break;
            case 3: exit(0);
            break;
        }
    }
}

void insert(int data)
{
  struct sll *temp;
  struct sll *new = (struct sll *)malloc(sizeof(struct sll));
  if(new == NULL)
  {
      printf("Memory not allocated\n");
  }
  else
  {
      new->data = data;
      new->link = NULL;
      if(head == NULL)
      {
          head = new;
      }
      else
      {
          temp = head;
          while(temp->link != NULL)
          {
              temp = temp->link;
          }
          temp->link = new;
       }
  }
}

void print()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct sll *temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
