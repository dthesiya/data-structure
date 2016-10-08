//
// Created by Priyank Vora on 10/8/16.
//

#include <iostream>

using namespace std;


// time complexity = O(n)
void Reverse(char A[], int size)
{
  int i, j=size-1;
  for (i=0; i<size/2; i++)
  {
    char temp = A[j];
    A[j] = A[i];
    A[i] = temp;
    j--;
  }
}

// recursion

void Reverse(int A[], int start, int end)
{
  int temp;
  if(start>=end)
    return;
  temp = A[start];
  A[start] = A[end];
  A[end] = temp;
  Reverse(A, start+1, end-1);
}


int main()
{
  int A[] = {1,2,3,4,5};
  int n = sizeof(A)/ sizeof(A[0]);
  Reverse(A, 0, n-1);
  for (int i=0; i<n; i++)
    cout << A[i];
  cout << endl;
  return 0;
}