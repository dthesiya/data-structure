//
// Created by Priyank Vora on 10/25/16.
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

void Inorder(struct BstNode *root)
{
  if(root == NULL)
    return;
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

void Mirror(struct BstNode *root)
{
  if(root == NULL)
    return;
  else
  {
    struct BstNode *temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    Mirror(root->left);
    Mirror(root->right);
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
  cout << "Original Tree : ";
  Inorder(root);
  Mirror(root);
  cout << "\n";
  cout << "Mirror Tree : ";
  Inorder(root);
  cout << "\n";
  return 0;
}