//
// Created by Priyank Vora on 10/22/16.
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

// level order traversal - recursion
void LeftView(Node *root)
{
  if (root == NULL)
  {
    cout << "tree is empty\n";
    return ;
  }
  queue<Node*> Q;
  Q.push(root);
  Q.push(NULL);
  cout << root->data << " ";

  while (!Q.empty())
  {
    Node* current = Q.front();
    Q.pop();

    if (current == NULL)
    {
      if(!Q.empty())
      {
        current = Q.front();
        cout << current->data << " ";
        Q.pop();
        Q.push(NULL);
      }
    }
    if (current != NULL)
    {
      if (current->left != NULL)
        Q.push(current->left);
      if (current->right != NULL)
        Q.push(current->right);
    }
  }
}

// simple recursive traversal - keep track of both variable max and level
/*
void LeftView1(struct Node *root, int level, int *max)
{
  if (root == NULL)
    return;
  if (max < level)
  {
    cout << root->data << " ";
    max = level;
  }
  LeftView1(root->left,level+1, max);
  LeftView1(root->right, level+1, max);
}
*/
int main()
{
  Node *root = NULL;
  root = Insert(root, 'M');
  root = Insert(root, 'B');
  root = Insert(root, 'Q');
  root = Insert(root, 'Z');
  root = Insert(root, 'A');
  root = Insert(root, 'C');
  LeftView(root);
  return 0;
}
