//
// Created by Priyank Vora on 9/13/16.
//

Node* Reverse(Node* head)
{
  if (head==NULL || head->next == NULL)
  {
    return head;
  }
  struct Node* temp = head;
  struct Node* temp1 = NULL;
  do{
    temp1 = temp->next;
    temp->next = temp->prev;
    temp->prev = temp1;
    temp = temp1;
  }
  while(temp->next != NULL);
  temp->next = temp->prev;
  temp->prev = NULL;
  return temp;
}
