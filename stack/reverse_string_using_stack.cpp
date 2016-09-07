//
// Created by Priyank Vora on 9/2/16.
//

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
private:
    int top;
    char A[101];
public:
    void Push(int x);
    void Pop();
    int Top();
    bool IsEmpty();
};

void ReverseString(char *c, int n)
{
  stack<char> S;

  //loop for push
  for(int i=0; i<n; i++)
  {
    S.push(c[i]);
  }

  //loop for pop
  for(int i=0; i<n; i++)
  {
    c[i] = S.top();
    S.pop();
  }
}


int main()
{
  char c[51];
  printf("enter a string:");
  gets(c);
  ReverseString(c, strlen(c));
  printf("output:%s\n",c);
  return 0;
}
