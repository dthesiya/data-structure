//
// Created by Priyank Vora on 10/27/16.
//

#include <iostream>

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

struct BstNode* lowest_common_ancestor(struct BstNode* root, int n1, int n2)
{
  if (root == NULL)
    return NULL;
  if (root->data < n1 && root->data < n2)
  {
    return lowest_common_ancestor(root->right, n1, n2);
  }
  if (root->data > n1 && root->data > n2)
  {
    return lowest_common_ancestor(root->left, n1, n2);
  }
  return root;
}



int main()
{
  BstNode *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 5);
  root = Insert(root, 15);
  root = Insert(root, 25);
  root = Insert(root, 35);

  struct BstNode *temp = lowest_common_ancestor(root, 15, 25);
  cout << "common ancestor of 15 and 25 is: " << temp->data << endl;
  return 0;
}