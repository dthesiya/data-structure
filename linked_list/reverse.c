#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* Reversed(struct Node* head)
{
  struct Node *next,*current,*prev;
  current = head;
  prev = NULL;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
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
    printf("%d", head->data);
    head = head->next;
  }
  printf("\n");

}

int main()
{
  struct Node* head = NULL;
  head = Insert(head,3);
  head = Insert(head,4);
  head = Insert(head,5);
  Print(head);
  head = Reversed(head);
  Print(head);
}