//
// Created by Priyank Vora on 9/17/16.
//

#include<iostream>
#include <string>
#include <stack>

using namespace std;


string InfixToPostfix(string expression);
int IshigherPrecedence(char op1, char op2);
bool IsOperator(char C);
bool IsOperand(char C);

int main()
{
  string expression;
  string postfix;
  cout << "Enter Expression:";
  cin >> expression;
  postfix = InfixToPostfix(expression);
  cout << "\nOutput is:" << postfix;
}

string InfixToPostfix(string expression)
{
  stack<char> S;
  string postfix = "";
  for (int i = 0 ; i < expression.length() ; i++)
  {
    if(expression[i] == ' ' || expression[i] == ',')
    {
      continue;
    }
    else if (IsOperand(expression[i]))
    {
      postfix += expression[i];
    }
    else if(IsOperator(expression[i]))
    {
      while (!S.empty() && IshigherPrecedence(S.top(), expression[i]))
      {
        postfix += S.top();
        S.pop();
      }
      S.push(expression[i]);
    }
  }
  while (!S.empty())
  {
    postfix += S.top();
    S.pop();
  }
  return postfix;
}

bool IsOperand(char C)
{
  if (C >= '0' && C <= '9') return true;
  if (C >= 'a' && C <= 'z') return true;
  if (C >= 'A' && C <= 'Z') return true;
  return false;
}

bool IsOperator(char C)
{
  if (C == '*' || C =='/' || C == '+' || C == '-' || C == '$') return true;
  return false;
}

int GetOperatorWeight(char op)
{
  int weight = -1;
  switch (op)
  {
    case '+':
    case '-':
      weight = 1;
      break;
    case '*':
    case '/':
      weight = 2;
      break;
    case '$':
      weight = 3;
      break;
  }
  return weight;
}

int IsRightAssociative(char op)
{
  if (op == '$') return true;
  else return false;
}

int IshigherPrecedence(char op1, char op2)
{
  int op1weight = GetOperatorWeight(op1);
  int op2weight = GetOperatorWeight(op2);

  if (op1weight == op2weight)
  {
    if (IsRightAssociative(op1)) return false;
    else return true;
  }
  return op1weight > op2weight ? true : false;
}