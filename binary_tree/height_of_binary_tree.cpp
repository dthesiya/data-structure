//
// Created by Priyank Vora on 11/20/16.
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

// time = O(n)
int Height_BT(struct Node *root)
{
  if(root == NULL)
    return -1;
  return (max(Height_BT(root->left), Height_BT(root->right)) + 1);
}

int main()
{
  Node* root = Getnewnode(3);
  root->left = Getnewnode(2);
  root->right = Getnewnode(5);
  root->left->left = Getnewnode(1);
  root->right->left = Getnewnode(4);
  root->left->left->left = Getnewnode(10);
  root->left->left->left->left = Getnewnode(11);
  int res = Height_BT(root);
  cout << "Height is: " << res;
  return 0;
}
