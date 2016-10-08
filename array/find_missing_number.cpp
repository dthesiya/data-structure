//
// Created by Priyank Vora on 10/6/16.
//

#include <iostream>

using namespace std;

// big O(n)
int find_missing_number(int A[], int n)
{
  int no=0;
  for (int i=0; i<n; i++)
  {
    if (A[i] + 1 == A[i + 1])
    {
      continue;
    }
    else
    {
      no = A[i]+1;
      break;
    }
  }
  return no;
}

// if not contineous then do some using sum formula and then substract all elements from that and return remaining

// do XOR of both sets and then do XOR of their ans.

int main()
{
  int A[] = {1,2,3,4,5,6,7,9};
  int n = sizeof(A)/ sizeof(A[0]);
  int number = find_missing_number(A,n);
  cout << "Missing no is : " << number << endl;
  return 0;
}