//
// Created by Priyank Vora on 11/15/16.
//

#include <iostream>

using namespace std;

void Rotate_string(char A[], int start, int end)
{
  while(start<end)
  {
    char temp = A[end];
    A[end] = A[start];
    A[start] = temp;
    start++;
    end--;
  }
}

int main()
{
  char A[] = "priyank";
  int n = sizeof(A)/sizeof(A[0]);
  Rotate_string(A, 0, 1);
  Rotate_string(A, 2, n-1);
  Rotate_string(A, 0, n-1);
  for (int i=0; i<n; i++)
  {
    cout << A[i] << " ";
  }
  return 0;
}