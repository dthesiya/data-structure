#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  if (head == NULL)
  {
    head = temp;
  }
  else
  {
    struct Node *temp1 = head;
    while (temp1->next != NULL) {
      temp1 = temp1->next;
    }
    temp1->next = temp;
  }
}

void Print()
{
  struct Node* temp = head;
  while(temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void reverse_linked_list(struct Node* p)
{
  if (p->next == NULL)
  {
    head = p;
    return;
  }
  reverse_linked_list(p->next);
  struct Node* q = p->next;
  q->next = p;
  p->next = NULL;
}


int main()
{
  Insert(2);
  Insert(3);
  Insert(4);
  Insert(5);
  printf("recursive print is :\n");
  Print();
  printf("reverse recursive linked list is :\n");
  reverse_linked_list(head);
  Print();
  return 0;

}