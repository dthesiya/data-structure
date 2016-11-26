//
// Created by Priyank Vora on 11/23/16.
//

// lsb is first node in first no and second no
// 358 + 288
// 8->5->3 and 8->8->2

struct Node *Add_two_no(struct Node *first, struct Node* second)
{
  struct Node *res = NULL;
  struct Node *temp, *prev;
  int sum=0, carry=0;

  while(first!=NULL || second!=NULL)
  {
    sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
    carry = (sum>=10 ? 1 : 0);
    sum = sum / 10;

    temp = getnewnode(sum);

    if(res == NULL)
    {
      res = temp;
    }
    else
      prev->next = temp;

    prev = temp;

    if(first)
      first = first->next;
    if(second)
      second - second->next;
  }

  if(carry > 0)
    temp->next = getnewnode(carry);

  return res;
}