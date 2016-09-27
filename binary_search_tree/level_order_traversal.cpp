//
// Created by Priyank Vora on 9/26/16.
//

#include <iostream>
#include <queue>

using namespace std;

struct Node{
    char data;
    Node *left;
    Node *right;
};

Node* Getnewnode(char data)
{
  Node *new_node = new Node();
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node* Insert(Node* root, char data)
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
void LevelOrder(Node *root)
{
  if (root == NULL)
  {
    cout << "tree is empty\n";
    return ;
  }
queue<Node*> Q;
  Q.push(root);
  while (!Q.empty())
  {
    Node* current = Q.front();
    cout << current->data << " ";
    if (current->left != NULL)
      Q.push(current->left);
    if (current->right != NULL)
      Q.push(current->right);
    Q.pop();
  }
}

int main()
{
  Node* root = NULL;
  root = Insert(root, 'M'); root = Insert(root, 'B');
  root = Insert(root, 'Q'); root = Insert(root, 'Z');
  root = Insert(root, 'A'); root = Insert(root, 'C');
  LevelOrder(root);
  return 0;
}