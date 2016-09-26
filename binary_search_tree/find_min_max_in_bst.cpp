//
// Created by Priyank Vora on 9/25/16.
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

int FindMin(BstNode *root)
{
  BstNode *current = root;
  while (current->left != NULL)
  {
    current = current->left;
  }
  return current->data;
}

int FindMax(BstNode *root)
{
  BstNode *current = root;
  while (current->right != NULL)
  {
    current = current->right;
  }
  return current->data;
}


int main()
{
  BstNode *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 5);
  root = Insert(root, 15);
  root = Insert(root, 35);
  root = Insert(root, 10);
  cout << "minimum number is: " << FindMin(root) << "\n";
  cout << "maximum number is:" << FindMax(root) << endl;
  return 0;
}
