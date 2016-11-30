//
// Created by Priyank Vora on 11/29/16.
//


// pre order
void Pre_Order(struct Node root)
{
  stack<struct Node*> S;
  while(1)
  {
    while(root)
    {
      cout << root->data;
      S.push(root);
      root = root->left;
    }
    if(isempty(S))
      break;
    root = S.pop();
    root = root->right;
  }
}

// In order
void In_Order(struct Node *root)
{
  satck<struct Node*> S;
  while(1)
  {
    while(root)
    {
      S.push(root);
      root = root->left;
    }
    if(isempty(S))
      break;
    root = S.pop();
    cout << root->data;
    root = root->right;
  }
}

// post order
void Post_Order(struct Node *root)
{
  stack<struct Node*> S;
  if(root == NULL)
    return;
  S.push(root);
  struct Node* previous = NULL;
  while(!isempty(S))
  {
    struct Node* current = S.top();
    if(!previous || previous->left == current || previous->right == current)
    {
      if(current->left)
        S.push(current->left);
      else if(current->right)
        S.push(current->right);
    }
    else if(current->left == previous)
    {
      if (current->right)
        S.push(current->right);
    }
    else
    {
      cout << current->data;
      S.pop();
    }
    previous = current;
  }
}