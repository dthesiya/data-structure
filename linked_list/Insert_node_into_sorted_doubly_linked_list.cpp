//
// Created by Priyank Vora on 9/13/16.
//

Node* SortedInsert(Node *head,int data)
{
  struct Node* temp = head;
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = data;

  if (temp == NULL)
  {
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
  }

  while (temp != NULL)
  {
    if (temp->data > data)
    {
      if (temp->prev != NULL)
      {
        struct Node* temp1 = NULL;
        temp1 = temp->prev;
        temp->prev = new_node;
        new_node->prev = temp1;
        temp1->next = new_node;
        new_node->next = temp;
        break;
      }
      else
      {
        temp->prev = new_node;
        new_node->next = temp;
        new_node->prev = NULL;
        return new_node;
      }
    }
    else
    {
      if (temp->next != NULL)
      {
        temp = temp->next;
      }
      else
      {
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next = NULL;
        break;
      }
    }
  }
  return head;
}
