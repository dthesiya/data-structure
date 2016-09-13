//
// Created by Priyank Vora on 9/13/16.
//

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
  struct Node* temp1 = headA;
  struct Node* temp2 = headB;

  while (temp1 != temp2)
  {
    temp1 = temp1->next;
    temp2 = temp2->next;
    if (temp1 == NULL)
    {
      temp1 = headB;
    }
    if (temp2 == NULL)
    {
      temp2 = headA;
    }
  }
  return temp1->data;
}
