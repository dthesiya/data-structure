//
// Created by Priyank Vora on 9/27/16.
//

#include <iostream>

using namespace std;

struct Node{
    char data;
    Node *left;
    Node *right;
};

Node* Getnewnode(char data)
{
  Node *new_node = new Node();
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node* Insert(Node* root, char data)
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

void preorder(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data;
  preorder(root->left);
  preorder(root->right);
}

void Inorder(Node *root)
{
  if (root == NULL)
    return;
  preorder(root->left);
  cout << root->data;
  preorder(root->right);
}

void postorder(Node *root)
{
  if (root == NULL)
    return;
  preorder(root->left);
  preorder(root->right);
  cout << root->data;
}

int main()
{
  Node* root = NULL;
  root = Insert(root, 'M'); root = Insert(root, 'B');
  root = Insert(root, 'Q'); root = Insert(root, 'Z');
  root = Insert(root, 'A'); root = Insert(root, 'C');
  cout << "preorder is :" ;
  preorder(root);
  cout << "\n";
  cout << "Inorder is :";
  Inorder(root);
  cout << "\n";
  cout << "postorder is :";
  postorder(root);
  cout << "\n";
  return 0;
}