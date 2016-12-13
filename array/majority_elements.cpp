//
// Created by Priyank Vora on 10/5/16.
//

#include <iostream>

using namespace std;


// using O(nlogn) - binary search tree
/*
int Majority_element(int A[], int n)
{
  sort(A, A+n);
  int counter = 0;
  for (int i=0; i<n; i++)
  {
    if((counter+1)>(n/2))
      return A[i];
    if(A[i] == A[i+1])
      counter++;
    else
      counter=0;
  }
  return 0;
}
 */


// using O(n) = Moore's Voting Algorithm

int Majority_element(int A[], int n)
{
  int maj=0, counter=1;
  for (int i=1; i<n; i++)
  {
    if (A[maj] == A[i])
    {
      counter++;
    }
    else
    {
      counter--;
    }
    if (counter == 0)
    {
      maj = i;
      counter = 1;
    }
  }
  return A[maj];
}

bool IsMajority(int A[], int n, int candidate)
{
  int count = 0;
  for (int i=0; i<n; i++)
    if (A[i] == candidate)
      count++;
  if(count>(n/2))
    return true;
  else
    return false;
}

void PrintMajority(int A[], int n)
{
  int cand = Majority_element(A, n);

  if(IsMajority(A, n, cand))
    cout << cand << endl;
  else
    cout << "None" << endl;
}

int main()
{
  int A[] = {3 ,3 ,4 ,2 ,4 ,4 ,2 ,4};
  int n = sizeof(A)/ sizeof(A[0]);
  /*int number = Majority_element(A,n);
  if (number == 0)
    cout << "None" << endl;
  else
    cout << number << endl;
    */
  PrintMajority(A, n);

  return 0;
}

// we can also find median of array and then see if median repeates more than half of elements times then it is majority. so if
// the element occurs more than n/2 times in A then it must be the median of A.  but reverse is not true.