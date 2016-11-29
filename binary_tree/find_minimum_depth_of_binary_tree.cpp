//
// Created by Priyank Vora on 11/27/16.
//

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* Getnewnode(int data)
{
  Node *new_node = new Node();
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node* Insert(Node* root, int data)
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

int Minimum_Depth(struct Node* node)
{
  if(node == NULL)
    return 0;

  if(node->left == NULL && node->right == NULL)
    return 1;

  if(node->left == NULL)
    return Minimum_Depth(node->right) + 1;

  if(node->right == NULL)
    return Minimum_Depth(node->left) + 1;

  return min(Minimum_Depth(node->left), Minimum_Depth(node->right)) + 1;
}

int main()
{
  Node* root = Getnewnode(3);
  root->left = Getnewnode(2);
  root->right = Getnewnode(5);
  root->left->left = Getnewnode(1);
  root->left->right = Getnewnode(8);
  int result = Minimum_Depth(root);
  cout << result;
  return 0;
}