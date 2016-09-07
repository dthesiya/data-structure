#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *top = NULL;

void Push(int x)
{
  struct Node *new = (struct Node*)malloc(sizeof(struct Node));
  new->data = x;
  new->link = top;
  top = new;
}

void Pop()
{
  struct Node *temp;
  if (top == NULL)
  {
    return;
  }
  temp = top;
  top = top->link;
  free(temp);
}

void Top()
{
  if (top == NULL)
  {
    printf("ERROR : stack is empty\n");
  }
  printf("%d\n", top->data);
}

void Print()
{
  struct Node *temp = top;
  while(temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int main()
{
  Push(3); Print();
  Push(5); Print();
  Push(6); Print();
  Pop(); Print();
  Top();
  return 0;
}