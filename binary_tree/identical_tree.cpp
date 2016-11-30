//
// Created by Priyank Vora on 11/30/16.
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

bool isIdentical(struct Node* rootA, struct Node* rootB)
{

  if(rootA == NULL && rootB == NULL)
    return true;
  if(rootA == NULL || rootB == NULL)
    return false;
  return (rootA->data == rootB->data && isIdentical(rootA->left, rootB->left) && isIdentical(rootA->right, rootB->right));
}



int main()
{
  Node* rootA = Getnewnode(3);
  rootA->left = Getnewnode(2);
  rootA->right = Getnewnode(5);
  rootA->left->left = Getnewnode(1);
  rootA->right->left = Getnewnode(4);
  Node* rootB = Getnewnode(3);
  rootB->left = Getnewnode(2);
  rootB->right = Getnewnode(5);
  rootB->left->left = Getnewnode(1);
  rootB->right->left = Getnewnode(4);
  if(isIdentical(rootA, rootB))
    cout << "Tree is Identical" << endl;
  else
    cout << "Tree is not Identical" << endl;
  return 0;
}