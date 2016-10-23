//
// Created by Priyank Vora on 10/13/16.
//

#include <iostream>

using namespace std;


// time = O(n2)

void NextGreaterElement(int A[], int n)
{
  int next, i, j;
  for (i = 0; i<n; i++)
  {
    next = -1;
    for (j=i+1; j<n; j++)
    {
      if (A[j] > A[i])
      {
        next = A[j];
        break;
      }
    }
    cout << "A[" << i << "] --> " << next << endl;
  }
}



int main()
{
  int A[] = {13, 7, 6, 12};
  int n = 4;
  NextGreaterElement(A, n);
  return 0;
}