//
// Created by Priyank Vora on 1/5/17.
//

#include <iostream>
#include <stack>

using namespace std;

class MinStack
{
private:
    stack<int> main_stack;
    stack<int> aux_stack;

public:
    void push(int x);
    void pop();
    int getmin();
};

void MinStack ::push(int x)
{
  if (main_stack.empty())
  {
    main_stack.push(x);
    aux_stack.push(x);
  }
  else
  {
    main_stack.push(x);
    if (x < aux_stack.top())
    {
      aux_stack.push(x);
    }
  }
}

void MinStack :: pop()
{
  if(main_stack.top() == aux_stack.top())
  {
    main_stack.pop();
    aux_stack.pop();
  }
  else
  {
    main_stack.pop();
  }
}

int MinStack ::getmin()
{
  return aux_stack.top();
}

int main()
{
  MinStack S;

  S.push(2);
  S.push(6);
  S.push(4);
  S.push(1);
  S.push(5);
  cout << S.getmin() << endl;
  S.pop();
  S.pop();
  cout << S.getmin() << endl;
  return 0;
}