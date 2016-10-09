//
// Created by Priyank Vora on 10/9/16.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool IsSubset(int A[], int B[], int n, int m)
{
  int i=0, j=0;
  sort(A, A+n);
  sort(B, B+m);

  if (n<m)
    return false;

  while (i < n && j < m)
  {
    if (A[i] < B[j])
      i++;
    else if (A[i] == B[j])
    {
      i++;
      j++;
    }
    else if (A[i] > B[j])
      return false;
  }
  if (j < m)
    return false;
  else
    return true;
}




int main()
{
  int A[] = {1,2,3,4,5};
  int B[] = {2,3};
  int n = sizeof(A)/ sizeof(A[0]);
  int m = sizeof(B)/ sizeof(B[0]);
  if(IsSubset(A, B, n, m))
    cout << "Yes...." << endl;
  else
    cout << "Nooo...." << endl;
  return 0;
}