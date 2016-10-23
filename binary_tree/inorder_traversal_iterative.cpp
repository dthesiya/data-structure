//
// Created by Priyank Vora on 10/22/16.
//

#include <iostream>
#include <stack>

using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* Getnewnode(int data)
{
  BstNode *new_node = new BstNode();
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

BstNode* Insert(BstNode* root, int data)
{
  if (root == NULL)
  {
    root = Getnewnode(data);
  }
  else if (data > root->data)
  {
    root->right = Insert(root->right, data);
  }
  else if (data <= root->data)
  {
    root->left = Insert(root->left, data);
  }
  return root;

}

void InorderTraversal(struct BstNode *root)
{
  struct BstNode *current = root;
  stack<BstNode*> S;
  bool done = 0;
  while(!done)
  {
    if (current != NULL)
    {
      S.push(current);
      current = current->left;
    }
    else
    {
      if (!S.empty())
      {
        current = S.top();
        cout << current->data << " ";
        S.pop();
        current = current->right;
      }
      else
      {
        done = 1;
      }
    }
  }
}



int main()
{
  BstNode *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 5);
  root = Insert(root, 15);
  root = Insert(root, 25);
  root = Insert(root, 3);
  root = Insert(root, 4);
  InorderTraversal(root);
  return 0;
}