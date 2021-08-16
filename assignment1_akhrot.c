#include <stdio.h>
#include <stdlib.h>

struct info
{
    char name[30];
    int price;
    struct info *next;
};
struct info *disp, *head;

void addrecord();
void display();
void less_amount();

int main()
{
    int ch;
    while (1)
    {
        printf("\n~Akhrot tracker~\n");
        printf("\n 1. To add records");
        printf("\n 2. To view the records");
        printf("\n 3. To view the cheap item");
        printf("\n 4. To exit");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        fflush(stdin);
        switch (ch)
        {
        case 1:
            addrecord();
            break;

        case 2:
            display();
            break;

        case 3:
            less_amount();

            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice! :/");
        }
    }
    return 0;
}

void addrecord()
{
    struct info *add;
    add = (struct info*)malloc(sizeof(struct info));

    printf("\n Enter the name of dealer: ");
    scanf("%s", &add->name);
    fflush(stdin);
    printf("\n Enter the price of akhrot: ");
    scanf("%d", &add->price);
    fflush(stdin);

    if (head == NULL || head->price >= add->price)
    {
        add->next = head;
        head = add;
    }
    else
    {
        struct info *temp = head;

        while (temp->next != NULL && temp->next->price < add->price)
        {
            temp = temp->next;
        }

        add->next = temp->next;
        temp->next = add;
    }
    return;
}

void display()
{
  if(head==NULL)
    {
      printf("\n No records to view\n");
      return;
    }

  for(disp=head;disp!=NULL;disp=disp->next)
    {
      printf("\nName of dealer: %s",disp->name);
      printf("\nPrice of akhrot: %d \n",disp->price);
    }
return;
}
void less_amount()
{
    struct info *temp1 = head;

    while (temp1->next != NULL)
    {
        if (temp1->price >= temp1->next->price)
        {
            temp1 = temp1->next;
        }
        else
            temp1->next = temp1->next->next;
    }
    printf("\nName of dealer who has the less price of walnuts : %s", temp1->name);
    printf("\nPrice of akhrot: %d \n", temp1->price);
}
