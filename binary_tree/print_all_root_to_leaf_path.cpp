//
// Created by Priyank Vora on 11/17/16.
//

#include <iostream>
#include <climits>

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

void print_path(int path[], int len)
{
  for (int i=0; i<len; i++)
  {
    cout << path[i] << " ";
  }
  cout << "\n";
}

void root_to_leaf(struct Node* node, int path[], int len)
{
  if (node == NULL)
  {
    return;
  }
  path[len] = node->data;
  len++;

  if ((node->right == NULL) && (node->left == NULL))
  {
    print_path(path, len);
  }
else
  {
    root_to_leaf(node->left, path, len);
    root_to_leaf(node->right, path, len);
  }

}

void print_root_to_leaf(struct Node* node)
{
  int path[100];
  int len = 0;
  root_to_leaf(node, path, len);

}


int main()
{
  Node* root = Getnewnode(3);
  root->left = Getnewnode(2);
  root->right = Getnewnode(5);
  root->left->left = Getnewnode(1);
  root->right->left = Getnewnode(4);
  root->left->right = Getnewnode(8);
  print_root_to_leaf(root);
  return 0;
}