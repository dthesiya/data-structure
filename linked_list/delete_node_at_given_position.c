//
// Created by Priyank Vora on 10/8/16.
//

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data, int n);
void Print();

void Insert(int data, int n)
{
  struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;
  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  struct Node* temp2 = head;
  int i;
  for (i=0; i<n-2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void Print()
{
  struct Node* temp = head;
  while (temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Delete(struct Node *head, int key)
{
  struct Node *temp = head;
  struct Node *prev = head;
  int counter = 0;
  if (key == 0)
  {
    head = temp->next;
    free(temp);
  }
  while(temp->next != NULL)
  {
    if (counter == key)
    {
      prev->next = temp->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
    counter++;
  }
}
int main()
{
  head = NULL;
  Insert(2,1);
  Insert(3,2);
  Insert(4,1);
  Insert(5,2);
  Insert(6,2);
  Insert(7,2);
  Insert(8,2);
  Print();
  Delete(head, 2);
  Print();
  return 0;
}
