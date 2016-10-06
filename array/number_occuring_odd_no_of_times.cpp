//
// Created by Priyank Vora on 10/5/16.
//

#include <iostream>

using namespace std;

/*
// using simple iteration - O(nlogn)
int odd_occurance(int A[], int n)
{
  sort(A, A+n);
  int counter = 1;
  for (int i=0; i<n; i++)
  {
    if(((counter%2) != 0) && counter > 1)
      return A[i];
    if(A[i] == A[i+1])
      counter++;
    else
      counter=1;
  }
  return 0;
}
*/

// using XOR - O(n)
int odd_using_xor(int A[], int n)
{
  int result=0;
  for (int i=0; i<n; i++)
  {
    result = result ^ A[i];
  }
  return result;
}

int main()
{
  int A[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2, 5, 3};
  int n = sizeof(A)/ sizeof(A[0]);
  int number = odd_using_xor(A,n);
  if (number == 0)
  {
    cout << "None" << endl;
  }
  else
  {
    cout << "Number is:" << number << endl;
  }
  return 0;
}