//
// Created by Priyank Vora on 9/19/16.
//

#include <iostream>
#include <stack>


using namespace std;

class MyStack
{
    stack<int> S;

private:
    int minele;

public:
    void pop ();
    void push(int x);
    void top();
    void getmin();
};

void MyStack ::push(int x)
{
  if (S.empty())
  {
    minele = x;
    S.push(x);
    return;
  }
  if (x < minele)
  {
    S.push(2*minele - x);
    minele = x;
  }
  else
  {
    S.push(x);
  }
}

void MyStack :: pop()
{
  if (S.empty())
  {
    return;
  }
  cout << "top most element is removed:";
  int t = S.top();
  S.pop();
  if (t < minele)
  {
    cout << minele  << "\n";
    minele = 2*minele - t;
  }
  else
  {
    cout << t << "\n";
  }
}

void MyStack ::top() {
  if (S.empty())
  {
    cout << "stack is empty";
    return;
  }
  int t = S.top();
  cout << "top element is ";
  (t < minele) ? cout << minele : cout << t;
  cout << "\n";
}

void MyStack ::getmin() {
  if (S.empty())
  {
    cout << "Stack is empty";
  }
  else {
    cout << "Minimum element in stack is :" << minele << "\n";
  }
}


int main()
{
  MyStack S;
  S.push(3);
  S.push(4);
  S.getmin();
  S.push(2);
  S.getmin();
  S.pop();
  S.push(5);
  S.top();
  return 0;
}