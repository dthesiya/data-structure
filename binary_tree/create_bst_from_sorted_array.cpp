//
// Created by Priyank Vora on 1/13/17.
//

#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

void Inorder(struct Node *root)
{
  if(root == NULL)
    return;

  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

struct Node *NewNode(int data)
{
  struct Node *new_node = new Node;
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

struct Node* BstFromArray(int A[], int l, int r)
{
  if(l>r)
    return NULL;

  int mid = l + (r-l)/2;
  struct Node *root = NewNode(A[mid]);

  root->left = BstFromArray(A, l, mid-1);

  root->right = BstFromArray(A, mid+1, r);

  return root;
}

int main()
{
  int A[] = {1,2,3,4,5,6,7};
  int n = sizeof(A)/ sizeof(A[0]);

  struct Node * result = BstFromArray(A, 0, n-1);

  Inorder(result);

  return 0;
}