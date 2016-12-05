//
// Created by Priyank Vora on 9/13/16.
//

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head)
{
  struct Node* slow = head;
  struct Node* fast = head;
  if (slow == NULL)
  {
    return false;
  }
  do{
    if(slow->next == NULL || fast->next->next == NULL)
    {
      return false;
    }
    slow = slow->next;
    fast = fast->next->next;
    if (slow->next == fast->next)
    {
      return true;
    }
  }
  while (true);
}

// using hashmap =

bool has_cycle(Node* head) {
  struct Node * temp = head;
  if (temp == NULL)
    return false;

  map<struct Node*, int> hashmap;
  while(temp != NULL)
  {
    if(hashmap.find(temp) != hashmap.end())
    {
      return true;
    }
    else
    {
      hashmap[temp];
    }
    temp = temp->next;
  }
  return false;
}