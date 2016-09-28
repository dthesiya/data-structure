//
// Created by Priyank Vora on 9/27/16.
//

#include <iostream>
#include <climits>

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

bool IsUtil(BstNode *root,int Min,int Max)
{
  if (root == NULL)
    return true;
  if (root->data > Min && root->data < Max && IsUtil(root->left, Min, root->data)
      && IsUtil(root->right, root->data, Max))
    return true;
  else
    return false;
}

bool IsBinarySearchTree(BstNode *root)
{
  return IsUtil(root, INT_MIN, INT_MAX);
}

/*
bool isBST(BstNode* root)
{
  static struct BstNode *prev = NULL;

  // traverse the tree in inorder fashion and keep track of prev node
  if (root)
  {
    if (!isBST(root->left))
      return false;

    // Allows only distinct valued nodes
    if (prev != NULL && root->data <= prev->data)
      return false;

    prev = root;

    return isBST(root->right);
  }

  return true;
}
*/

int main()
{
  BstNode *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 15);
  root = Insert(root, 25);
  root = Insert(root, 5);
  if (IsBinarySearchTree(root))
    cout << "this is binary search tree" << "\n";
  else
    cout << "this is not binary search tree" << "\n";
  return 0;
}
