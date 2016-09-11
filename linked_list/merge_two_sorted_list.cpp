//
// Created by Priyank Vora on 9/11/16.
//

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
  struct Node* tempA = headA;
  struct Node* tempB = headB;
  struct Node* temp = NULL;
  struct Node* head =  NULL;
  if (tempA == NULL)
  {
    return headB;
  }
  else if(tempB == NULL)
  {
    return headA;
  }
  if (tempA->data <= tempB->data)
  {
    temp = tempA;
    head = temp;
    tempA = tempA->next;
  }
  else {
    temp = tempB;
    head =temp;
    tempB = tempB->next;
  }
  while (tempA != NULL && tempB != NULL)
  {
    if (tempA->data <= tempB->data)
    {
      temp->next = tempA;
      temp = temp->next;
      tempA = tempA->next;
    }
    else
    {
      temp->next = tempB;
      temp = temp->next;
      tempB = tempB->next;
    }
  }
  while (tempA != NULL)
  {
    temp->next = tempA;
    temp = temp->next;
    tempA =tempA->next;
  }
  while (tempB != NULL)
  {
    temp->next = tempB;
    temp = temp->next;
    tempB =tempB->next;
  }
  return head;
}
