#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int data)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  if(head == NULL)
  {
    head = temp;
  }
  else
  {
    struct Node* temp1 = head;
    while(temp1->next != NULL)
    {
      temp1 = temp1->next;
    }
    temp1->next = temp;
  }
  return head;
}

void print(struct Node* head)
{
  if (head == NULL)
  {
    printf("\n");
    return;
  }
  printf("%d\t",head->data);
  print(head->next);
}

void reverse_print(struct Node* head)
{
  if(head == NULL)
  {
    return;
  }
  reverse_print(head->next);
  printf("%d\t",head->data);
}

int main()
{
  struct Node* head = NULL;
  head = Insert(head, 2);
  head = Insert(head, 3);
  head = Insert(head, 4);
  printf("recursive print is :\n");
  print(head);
  printf("\n");
  printf("reverse recursive print is :\n");
  reverse_print(head);
  printf("\n");
  return 0;
}