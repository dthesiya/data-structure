#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data);
void Print();
void Delete(int n);

void Delete(int n)
{
  struct Node* temp1 = head;
  if (n == 1)
  {
    head = temp1->next;
    free(temp1);
    return;
  }
  for (int i=0; i<n-2; i++)
  {
    temp1 = temp1->next;
  }
  struct Node* temp2 = temp1->next; //point to nth node
  temp1->next = temp2->next;
  free(temp2);
}
void Insert(int data)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->next = head;
  temp->data = data;
  head = temp;
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

int main()
{
  head = NULL;
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(8);
  Print();
  Delete(3);
  Print();
  return 0;
}