//
// Created by Priyank Vora on 10/8/16.
//

#include <iostream>

using namespace std;


// time - O(n)
int FindMedian(int A[], int B[], int size)
{
  int i=0, j=0, k=0;
  int C[2*size];
  while (i<size)
  {
    if (k > size)
      return (C[k-1]+C[k-2]);
    if (A[i] < B[j])
      C[k++] = A[i++];
    else
      C[k++] = B[j++];
  }
  return 0;
}


int main()
{
  int A[] = {1, 12, 15, 26, 38};
  int B[] = {2, 13, 17, 30, 45};

  int size = sizeof(A)/ sizeof(A[0]);

  float median = FindMedian(A, B, size);

  cout << "Median is :" << median/2 << endl;

  return 0;
}