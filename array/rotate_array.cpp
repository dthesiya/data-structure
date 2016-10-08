//
// Created by Priyank Vora on 10/8/16.
//

#include <iostream>

using namespace std;


//time complexity - O(n*d) space = O(1)
void LeftRotate(int A[], int n)
{
  int temp = A[0];
  for (int i=0; i<n-1; i++)
  {
    A[i] = A[i+1];
  }
  A[n-1] = temp;
}

void Rotate(int A[], int n, int d)
{
  for (int i=0; i<d; i++)
  {
    LeftRotate(A, n);
  }
}

// juggling algorithm - time = O(n) space = O(1)
//This is an extension of method 2. Instead of moving one by one, divide the array in different sets
//where number of sets is equal to GCD of n and d and move the elements within sets.
//If GCD is 1 as is for the above example array (n = 7 and d =2), then elements will be moved within one set only,
// we just start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.

int main()
{
  int A[] = {1,2,3,4,5};
  int d = 2;
  int n = sizeof(A)/ sizeof(A[0]);
  Rotate(A, n, d);
  for (int i=0; i<n; i++)
    cout << A[i];
  cout << endl;
  return 0;
}