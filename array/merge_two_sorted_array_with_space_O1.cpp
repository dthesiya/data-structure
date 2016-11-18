//
// Created by Priyank Vora on 11/17/16.
//

#include <iostream>

using namespace std;


// start from last element in array 2 and see for smaller element in array 1 from back side.
void merge_array(int m[], int n[], int M, int N)
{
  for (int i=N-1; i>=0; i--)
  {
    int j, last = m[M-1];
    for(j=M-1; j>=0 && m[j] > n[i]; j--)
    {
      m[j+1] = m[j];
    }
    if (j != M-1)
    {
      m[j+1] = n[i];
      n[i] = last;
    }
  }
}

int main()
{
  int m[] = {1, 2, 5, 6, 7, 8, 12};
  int n[] = {4, 10, 15};
  int N_size = sizeof(n) / sizeof(n[0]);
  int M_size = (sizeof(m) / sizeof(m[0]));
  merge_array(m, n, M_size, N_size);
  for(int i = 0; i< M_size; i++)
    cout << m[i] << " ";
  cout << "\n";
  for(int i = 0; i<N_size; i++)
    cout << n[i] << " ";
  return 0;
}