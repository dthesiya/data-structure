//
// Created by Priyank Vora on 10/6/16.
//

#include <iostream>

using namespace std;

int find_number(int A[], int start, int end, int data)
{
  if (start>end)
    return -1;
  int mid = (start+end)/2;
  if (A[mid] == data)
    return mid;
  if (A[start] <= A[mid])
  {
    if (data >= A[start] && data <= A[mid])
      return find_number(A, start, mid-1, data);
    else
      return find_number(A, mid+1, end, data);
  }
  else
  {
    if (data>=A[mid] && data<=A[end])
      return find_number(A, mid+1, end, data);
    else
      return find_number(A, start, mid-1, data);
  }
}


int main()
{
  int A[] = {3,4,5,1,2};
  int n = 1;
  int size = sizeof(A)/ sizeof(A[0]);
  int result = find_number(A, 0, size-1, n);
  if(result != -1)
    cout << "Found index: " << result << endl;
  else
    cout << "Not Found" << endl;
  return 0;
}