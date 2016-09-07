//
// Created by Priyank Vora on 9/2/16.
//

#include<iostream>
#include<stack>
#include<stdlib.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void Insert(int x);
void Print();
void Reverse();


void Insert(int x)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = x;
  new_node->next = NULL;

  struct Node *temp = head;
  if (temp == NULL)
  {
    head = new_node;
    return;
  }
  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = new_node;
}

void Print()
{
  struct Node *temp = head;
  while(temp != NULL)
  {
    printf("%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Reverse()
{
  stack<struct Node*> S;

  struct Node *traverse = head;
  while(traverse != NULL)
  {
    S.push(traverse);
    traverse = traverse->next;
  }

  struct Node *temp = S.top();
  head = temp;
  S.pop();
  while(!S.top())
  {
    temp->next = S.top();
    S.pop();
    temp = temp->next;
  }
  temp->next = NULL;
}

int main()
{
  Insert(1);
  Insert(2);
  Insert(5);
  Print();
  Reverse();
  printf("\n");
  Print();
  return 0;
}
