//
// Created by Priyank Vora on 9/21/16.
//

#include <iostream>
#include<queue>

using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int x);
    int pop();
};

void QueueStack ::push(int x) {
  q1.push(x);
}

int QueueStack ::pop() {
  int t;
  while (!q1.empty())
  {
    t = q1.front();
    q1.pop();
    if (!q1.empty())
      q2.push(t);
  }
  while (!q2.empty())
  {
    int x = q2.front();
    q2.pop();
    q1.push(x);
  }
  return t;
}

int main()
{
  QueueStack Q;
  Q.push(2);
  Q.push(3);
  Q.push(5);
  cout << Q.pop() << endl;
  cout << Q.pop() << endl;
  return 0;
}