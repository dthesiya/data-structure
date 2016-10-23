//
// Created by Priyank Vora on 10/19/16.
//

#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* Rotate(struct Node* head, int n)
{
  struct Node *first, *end;
  for (int i=0;i<nr; i++)
  {
    end = head;
    first = head;
    while (end->next->next != NULL)
    {
      end = end->next;
    }
    end->next->next = first;
    head = end->next;
    end->next = NULL;
  }
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
    printf("\t");
    head = head->next;
  }
  printf("\n");

}

int main()
{
  struct Node* head = NULL;
  int n;
  cout << "Enter rotation no: ";
  cin >> n;
  head = Insert(head,10);
  head = Insert(head,20);
  head = Insert(head,30);
  head = Insert(head,40);
  head = Insert(head,50);
  head = Insert(head,60);
  Print(head);
  head = Rotate(head, n);
  Print(head);
}