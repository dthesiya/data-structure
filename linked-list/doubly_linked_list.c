#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* get_node(int x)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = x;
  new_node->next = NULL;
  new_node->prev = NULL;
  return new_node;
}

void Insert_at_head(int x)
{
  struct Node* new = get_node(x);
  if (head == NULL)
  {
    head = new;
    return;
  }
  new->next = head;
  head->prev = new;
  head = new;
}

void Insert_at_tail(int x)
{
  struct Node* temp = get_node(x);
  if (head == NULL)
  {
    head = temp;
    return;
  }
  struct Node* temp1 = head;
  while(temp1->next != NULL)
  {
    temp1 = temp1->next;
  }
  temp1->next = temp;
  temp->prev = temp1;
  temp->next = NULL;
}

void print()
{
  struct Node* temp = head;
  printf("Forward...");
  while(temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Reverse_print()
{
  struct Node* temp = head;
  if(temp == NULL)
  {
    return;
  }
  printf("Backward...");
  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  while(temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->prev;
  }
  printf("\n");
}


int main()
{
  head = NULL;
  Insert_at_head(2); print(); Reverse_print();
  Insert_at_head(3); print(); Reverse_print();
  Insert_at_head(5); print(); Reverse_print();
  Insert_at_tail(7); print(); Reverse_print();
  Insert_at_head(8); print(); Reverse_print();
  return 0;
}