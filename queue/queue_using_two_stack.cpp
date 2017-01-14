//
// Created by Priyank Vora on 1/12/17.
//

#include <iostream>
#include <stack>

using namespace std;

class queue_stack
{
private:
    stack<int> old_stack;
    stack<int> new_stack;

public:
    void enqueue(int x);
    int peek();
    void dequeue();
    void shiftstack();
};

void queue_stack ::enqueue(int x) {
  new_stack.push(x);
}

void queue_stack ::shiftstack() {
  if(old_stack.empty())
  {
    while(!new_stack.empty())
    {
      old_stack.push(new_stack.top());
      new_stack.pop();
    }
  }
}

int queue_stack ::peek() {
  shiftstack();
  return old_stack.top();
}

void queue_stack :: dequeue()
{
  shiftstack();
  old_stack.pop();
}

int main()
{
  queue_stack Q;
  Q.enqueue(2);
  Q.enqueue(3);
  Q.enqueue(6);
  Q.enqueue(8);
  cout << "peek is : " << Q.peek() << endl;
  Q.dequeue();
  Q.dequeue();
  Q.enqueue(10);
  cout << "peek is : " << Q.peek() << endl;
  Q.enqueue(11);
  Q.dequeue();
  Q.dequeue();
  cout << "peek is : " << Q.peek() << endl;
  Q.dequeue();
  Q.dequeue();
  Q.enqueue(15);
  cout << "peek is : " << Q.peek() << endl;
  Q.dequeue();
  cout << "peek is : " << Q.peek() << endl;
  Q.dequeue();
  cout << "peek is : " << Q.peek() << endl;
  return 0;
}

