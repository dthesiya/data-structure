//
// Created by Priyank Vora on 10/25/16.
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

// time = O(n)
// space = O(n) and O(1) if function call stack is not considered
int isBSTUtil(struct Node* node, int min,int max)
{
  if (node == NULL)
    return 1;
  if(node->data<min || node->data>max)
    return 0;
  return (isBSTUtil(node->left,min, node->data-1) && isBSTUtil(node->right, node->data+1, max));
}

int isBST(struct Node *node)
{
  return isBSTUtil(node, INT_MIN, INT_MAX);
}

int main()
{
  Node* root = Getnewnode(3);
  root->left = Getnewnode(2);
  root->right = Getnewnode(5);
  root->left->left = Getnewnode(1);
  root->right->left = Getnewnode(4);
  if(isBST(root))
    cout << "Tree is BST" << endl;
  else
    cout << "Tree is not BST" << endl;
  return 0;
}

//we can do inorder traversal and store every element in an array if we get that sorted then it will be BSt.
