//
// Created by Priyank Vora on 11/23/16.
//

#include <iostream>

using namespace std;

struct Node{
    char data;
    Node *next;
};

struct Node *newNode(char c)
{
  struct Node *new_node = new Node;
  new_node->data = c;
  new_node->next = NULL;
  return new_node;
}

int compare_list(Node *list1, Node *list2)
{
  while(list1 && list2 && list1->data == list2->data)
  {
    list1 = list1->next;
    list2 = list2->next;
  }

  if(list1 && list2)
  {
    return list1->data > list2->data ? 1 : -1;
  }

  if(list1 && !list2)
    return 1;
  if(list2 && !list1)
    return -1;

  return 0;
}


int main()
{
  struct Node *list1 = newNode('g');
  list1->next = newNode('e');
  list1->next->next = newNode('e');
  list1->next->next->next = newNode('k');
  list1->next->next->next->next = newNode('s');
  list1->next->next->next->next->next = newNode('a');

  struct Node *list2 = newNode('g');
  list2->next = newNode('e');
  list2->next->next = newNode('e');
  list2->next->next->next = newNode('k');
  list2->next->next->next->next = newNode('s');
  list2->next->next->next->next->next = newNode('b');

  cout << compare_list(list1, list2);

  return 0;
}