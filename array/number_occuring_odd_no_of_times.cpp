//
// Created by Priyank Vora on 10/5/16.
//

#include <iostream>

using namespace std;


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


int main()
{
  int A[] = {1,2,1,2,3,3,3,2,2,2};
  int n = sizeof(A)/ sizeof(A[0]);
  int number = odd_occurance(A,n);
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