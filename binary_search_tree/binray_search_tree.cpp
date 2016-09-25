//
// Created by Priyank Vora on 9/24/16.
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

bool search(BstNode *root, int data)
{
  if( root == NULL )
  {
    return false;
  }
  if (data == root->data)
  {
    return true;
  }
  else if (data <= root->data)
  {
    return search(root->left, data);
  }
  else
    return search(root->right, data);
}



int main()
{
  BstNode *root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 5);
  root = Insert(root, 15);
  root = Insert(root, 25);
  root = Insert(root, 10);
  int number;
  cout << "enter some number\n";
  cin >> number;
  if (search(root, number))
    cout << "Found !!!\n";
  else
    cout << "Not Found\n";
return 0;
}
