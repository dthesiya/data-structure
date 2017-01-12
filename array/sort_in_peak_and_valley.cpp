//
// Created by Priyank Vora on 1/11/17.
//

#include <iostream>

using namespace std;

int max_value(int A[], int a, int b, int c)
{
  int max_i = max(A[a], max(A[b], A[c]));
  if(max_i == A[a])
    return a;
  else if(max_i == A[b])
    return b;
  else
    return c;
}


void peak_and_valley(int A[], int n)
{
  for(int i=1; i<n; i+=2)
  {
    int max_index = max_value(A, i-1, i, i+1);
    if(i != max_index)
    {
      swap(A[i], A[max_index]);
    }
  }
}

int main()
{
  int A[] = {9,1,0,4,8,7};
  int n = sizeof(A)/ sizeof(A[0]);
  peak_and_valley(A, n);
  for(int i=0; i<n; i++)
  {
    cout << A[i] << " ";
  }
  return 0;
}