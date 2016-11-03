//
// Created by Priyank Vora on 10/14/16.
//

#include <iostream>

using namespace std;

int FindMin(int A[], int start, int end)
{
  int mid = start + (end-start)/2;
  if (start>end)
    return A[0];
  if (start == end)
    return A[start];
  if (end>mid && A[mid+1] < A[mid])
    return A[mid+1];
  if (start<mid && A[mid-1] > A[mid])
    return A[mid];
  if (A[end] > A[mid])
    return FindMin(A, start, mid-1);
  else
    return FindMin(A, mid+1, end);
}


int main()
{
  int A[] = {5,1,2,3,4};
  int n = sizeof(A)/ sizeof(A[0]);
  int result = FindMin(A, 0, n-1);
  cout << "Result = " << result << endl;
  return 0;
}
