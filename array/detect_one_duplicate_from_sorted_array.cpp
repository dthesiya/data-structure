//
// Created by Priyank Vora on 1/9/17.
//

#include <iostream>

using namespace std;

int find_dup(int *A, int l, int r)
{
  if(r == l)
    return A[l];

  int mid = l + (r-l)/2;

  if(A[mid] == A[mid+1] || A[mid] == A[mid-1])
    return A[mid];

  if(A[mid] == mid)
    return find_dup(A, l, mid-1);

  else
    return find_dup(A, mid+1, r);
}

int main()
{
  int A[] = {1, 1, 2, 3, 4, 5};
  cout << find_dup(A, 0, 5);
  return 0;
}