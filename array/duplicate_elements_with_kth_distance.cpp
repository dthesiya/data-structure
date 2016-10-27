//
// Created by Priyank Vora on 10/25/16.
//

#include <iostream>

using namespace std;

bool FindKth(int A[], int k, int size)
{
  for (int i=0; i<size; i++)
  {
    if (A[i] == A[i+k] && size>(i+k))
      return true;
  }
  return false;
}

int main()
{
  int A[] = {1,2,3,7,4,2};
  int k = 4;
  int size = sizeof(A)/ sizeof(A[0]);
  if(FindKth(A, k, size))
    cout << "Yes..." << endl;
  else
    cout << "No" << endl;
  return 0;
}