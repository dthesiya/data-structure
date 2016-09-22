//
// Created by Priyank Vora on 9/20/16.
//

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void Enqueue(int x)
{
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = x;
  new_node->next = NULL;
  if (front == NULL && rear == NULL)
  {
    front = rear = new_node;
    return;
  }
  rear->next = new_node;
  rear = new_node;
}

void Dequeue()
{
  struct Node *temp = front;
  if (front == NULL || rear == NULL)
  {
    printf("queue is empty\n");
    return;
  }
  if (front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    front = front->next;
  }
  free(temp);
}

void print()
{
  struct Node *temp = front;
  while (temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int Front()
{
  return front->data;
}

void IsEmpty()
{
  if (front == NULL && rear == NULL)
  {
    printf("hey !! queue is empty\n");
    return;
  }
}
int main()
{
  Enqueue(1); print();
  Enqueue(2); print();
  Enqueue(4); print();
  printf("front value is : %d\n",Front());
  Dequeue(); print();
  Dequeue(); print();
  Dequeue(); print();
  Dequeue();
  IsEmpty();
  return 0;
}



