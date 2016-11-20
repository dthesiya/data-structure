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

int Height_BT(struct Node *root)
{
  if(root == NULL)
    return -1;
  return (max(Height_BT(root->left), Height_BT(root->right)) + 1);
}

bool Is_Balanced(struct Node *root)
{
  if(root == NULL)
    return 1;
  int left_height = Height_BT(root->left);
  int right_height = Height_BT(root->right);

  if((abs(left_height-right_height) <= 1) && Is_Balanced(root->left) && Is_Balanced(root->right))
    return 1;
  return 0;
}


int main()
{
  Node* root = Getnewnode(3);
  root->left = Getnewnode(2);
  root->right = Getnewnode(5);
  root->left->left = Getnewnode(1);
  root->right->left = Getnewnode(4);
  root->left->right = Getnewnode(10);
  root->right->right = Getnewnode(11);
  root->left->left->left = Getnewnode(15);
  root->right->right->right = Getnewnode(16);
  root->right->right->left = Getnewnode(18);
  root->right->right->left->right = Getnewnode(20);
  root->right->right->left->right->right = Getnewnode(35);

  if(Is_Balanced(root))
    cout << "Tree is balanced" << endl;
  else
    cout << "Tree is not balanced" << endl;
  return 0;
}
