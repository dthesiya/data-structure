//
// Created by Priyank Vora on 11/24/16.
//

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *Reversed(struct Node *head, int k)
{
  Node* current= head;
  Node* next = NULL;
  Node* prev = NULL;
  int count = 0;

  if(head == NULL || k == 0)
    return head;

  while(current != NULL && count<k)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
  }
  if(next != NULL)
    head->next = Reversed(next, k);

  return prev;

}

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

void Print(struct Node* head)
{
  while(head != NULL)
  {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");

}

int main()
{
  struct Node* head = NULL;
  head = Insert(head,1);
  head = Insert(head,2);
  head = Insert(head,3);
  head = Insert(head,4);
  head = Insert(head,5);
  head = Insert(head,6);
  Print(head);
  head = Reversed(head, 3);
  Print(head);
}