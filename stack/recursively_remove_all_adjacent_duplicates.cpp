//
// Created by Priyank Vora on 1/6/17.
//

#include <iostream>
#include <stack>

using namespace std;

void RemoveDuplicates(string A)
{
  stack<char> S;
  int i=0;
  int l = A.size();
  string result;

  while (i<l)
  {
    if(S.empty() || A[i] != S.top())
    {
      S.push(A[i]);
      i++;
    }
    else
    {
      while(i<l && !S.empty() && A[i] == S.top())
      {
        S.pop();
        i++;
      }
    }
  }
  while(!S.empty())
  {
    result = S.top() + result;
    S.pop();
  }

  cout << result << endl;
}



int main()
{
  string A = "mississippi";
  RemoveDuplicates(A);
  return 0;
}