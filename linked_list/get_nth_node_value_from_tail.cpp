//
// Created by Priyank Vora on 9/12/16.
//

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
  struct Node* temp = head;
  struct Node* temp1 = head;
  for(int i=0; i<=positionFromTail; i++)
  {
    temp1 = temp1->next;
  }
  while(temp1 != NULL)
  {
    temp = temp->next;
    temp1 = temp1->next;
  }
  return temp->data;
}
