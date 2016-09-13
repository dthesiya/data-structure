//
// Created by Priyank Vora on 9/12/16.
//

/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
  struct Node* temp = head;
  struct Node* temp1 = temp->next;
  while (temp->next != NULL)
  {
    if (temp->data == temp1->data)
    {
      temp->next = temp1->next;
      temp1 = temp1->next;
    }
    else
    {
      temp = temp->next;
      temp1 = temp1->next;
    }
  }
  return head;
}
