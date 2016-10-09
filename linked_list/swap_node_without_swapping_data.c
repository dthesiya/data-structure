//
// Created by Priyank Vora on 10/9/16.
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

void SwapNode(struct Node *head, int A, int B)
{
  if (A==B)
    return;
  struct Node *prevA = NULL;
  struct Node *currentA = head;
  while (currentA && currentA->data != A)
  {
    prevA = currentA;
    currentA = currentA->next;
  }

  struct Node *prevB = NULL;
  struct Node *currentB = head;
  while (currentB && currentB->data != B)
  {
    prevB = currentB;
    currentB = currentB->next;
  }

  if (prevA != NULL)
  {
    prevA->next = currentB;
  }
  else
  {
    head = currentB;
  }

  if (prevB != NULL)
  {
    prevB->next = currentA;
  }
  else
  {
    head = currentA;
  }
  struct Node *temp = currentB->next;
  currentB->next = currentA->next;
  currentA->next = temp;
}

int main()
{
  head = NULL;
  Insert(2,1);
  Insert(3,2);
  Insert(4,1);
  Insert(5,2);
  Insert(8,2);
  Insert(9,2);
  Print();
  SwapNode(head, 3, 5);
  Print();
  return 0;
}