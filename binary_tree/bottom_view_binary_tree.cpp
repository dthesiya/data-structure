//
// Created by Priyank Vora on 12/1/16.
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

void Bottom_view(struct Node* root)
{
  if (root == NULL)
    return;

  Bottom_view(root->left);
  if(root->left == NULL && root->right == NULL)
    cout << root->data << " ";
  Bottom_view(root->right);
}


int main()
{
  Node* root = Getnewnode(20);
  root->left = Getnewnode(8);
  root->right = Getnewnode(22);
  root->left->left = Getnewnode(5);
  root->left->right = Getnewnode(3);
  root->right->left = Getnewnode(4);
  root->right->right = Getnewnode(25);
  root->left->right->left = Getnewnode(10);
  root->left->right->right = Getnewnode(14);

  Bottom_view(root);

  return 0;
}