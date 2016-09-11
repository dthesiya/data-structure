//
// Created by Priyank Vora on 9/10/16.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool ArePair(char opening, char closing)
{
  if (opening == '(' && closing == ')')
    return true;
  else if (opening == '{' && closing == '}')
    return true;
  else if (opening == '[' && closing == ']')
    return true;
  else
    return false;
}

bool AreBalanced(string exp)
{
  stack<char> S;

  for(int i=0 ; i<exp.length() ; i++)
  {
    if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
    {
      S.push(exp[i]);
    }
    else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
    {
      if (S.empty() || !ArePair(S.top(), exp[i]))
      {
        return false;
      }
      else {
        S.pop();
      }
    }
  }
  return S.empty() ? true : false;
}

int main()
{
  string expression;
  cout << "Enter your expression:";
  cin >> expression;
  if (AreBalanced(expression))
    cout << "\nBalanced";
  else
    cout << "\nNot Balanced";
  return 0;
}