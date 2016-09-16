//
// Created by Priyank Vora on 9/15/16.
//

#include<iostream>
#include <string>
#include <stack>

using namespace std;

int EvaluatePostfix(string expression);
int PerformOperation(char op, int operand1, int operand2);
bool IsNumber(char c);
bool IsOperator(char c);

int main()
{
  cout << "Enter valid expression: ";
  string expression;
  getline(cin, expression);
  int result = EvaluatePostfix(expression);
  cout << "Result : " << result;
  return 0;
}

int EvaluatePostfix(string expression)
{
  stack<char> S;

  for(int i=0; i<expression.length(); i++)
  {
    if (expression[i] == ' ' || expression[i] == ',')
    {
      continue;
    }
    else if (IsOperator(expression[i]))
    {
      int operand2 = S.top(); S.pop();
      int operand1 = S.top(); S.pop();
      int result = PerformOperation(expression[i], operand1, operand2);
      S.push(result);
    }
    else if (IsNumber(expression[i]))
    {
      int operand = 0;
      while (i<expression.length() && IsNumber(expression[i]))
      {
        operand = (operand*10) + (expression[i] - '0');
        i++;
      }
      i--;
      S.push(operand);
    }
  }
  return S.top();
}

bool IsNumber(char C)
{
  if (C >= '0' && C <= '9')
  {
    return true;
  }
  return false;
}

bool IsOperator(char C)
{
  if (C == '*' || C =='/' || C == '+' || C == '-')
  {
    return true;
  }
  return false;
}

int PerformOperation(char operation, int op1, int op2)
{
  if (operation == '+') return op1 + op2;
  else if (operation == '-') return op1 - op2;
  else if (operation == '*') return op1 * op2;
  else if (operation == '/') return op1 / op2;
  else cout << "unexpected Error\n";
  return -1;
}