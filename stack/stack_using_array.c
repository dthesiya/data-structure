#include <stdio.h>
#define MAX 101

int top = -1;
int A[MAX];

void push(int x)
{
  if(top == MAX - 1)
  {
    printf("ERROR : stack overflow\n");
    return;
  }
  top++;
  A[top] = x;
}

void pop()
{
  if (top == -1)
  {
    printf("ERROR : stack is enpty\n");
    return;
  }
  top--;
}

int TOP()
{
  return top;
}

void print()
{
  int i;
  printf("stack:");
  for (i = 0; i<=top; i++)
  {
    printf("%d",A[i]);
  }
  printf("\n");
}

int main()
{
  push(2); print();
  push(4); print();
  pop(); print();
  push(5); print();
  push(7); print();
  TOP(); print();
  return 0;
}

