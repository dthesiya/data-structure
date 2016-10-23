//
// Created by Priyank Vora on 9/27/16.
//

#include <iostream>

using namespace std;

struct Node
{
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

Node* FindMin(Node* root)
{
  if (root->left != NULL)
    root = root->left;
  return root;
}
Node* Delete(Node *root, int data)
{
  if (root == NULL)
    return root;
  else if (data < root->data)
    root->left = Delete(root->left, data);
  else if (data > root->data)
    root->right = Delete(root->right, data);
  else
  {
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      root = NULL;
    }
    else if (root->left == NULL)
    {
      Node *temp = root;
      root = root->right;
      delete temp;
    }
    else if (root->right == NULL)
    {
      Node *temp = root;
      root = root->left;
      delete temp;
    }
    else
    {
      Node *temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }
  return root;
}

void InOrder(Node* root)
{
  if (root == NULL)
    return;
  InOrder(root->left);
  cout << root->data << "\t";
  InOrder(root->right);
}

int main()
{
  Node *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 15);
  root = Insert(root, 25);
  root = Insert(root, 5);
  root = Insert(root, 9);
  root = Insert(root, 3);
  root = Insert(root, 40);
  root = Insert(root, 2);
  root = Insert(root, 23);

  cout << "Before Deletion:";
  InOrder(root);
  cout << "\n";

  root = Delete(root, 20);

  cout << "After Deletion:";
  InOrder(root);
  cout << "\n";
  return 0;
}