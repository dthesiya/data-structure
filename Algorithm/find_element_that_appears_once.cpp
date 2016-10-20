//
// Created by Priyank Vora on 10/17/16.
//

#include <iostream>
#define INT 32

using namespace std;

int FindElement(int A[], int n)
{
  int sum, result=0;
  for (int i=0; i<INT; i++)
  {
    sum = 0;
    int x = (1<<i);
    for (int j=0; j<n; j++)
    {
      if(A[j] & x)
        sum++;
    }
    if (sum%3)
      result = result | x;
  }
  return result;
}

int main()
{
  int A[] = {1,2,3,1,2,1,2};
  int n = sizeof(A)/ sizeof(A[0]);
  int result =  FindElement(A, n);
  cout << result << endl;
  return 0;
}