//
// Created by Priyank Vora on 11/17/16.
//

#include <iostream>

using namespace std;

void merge_array(int m[], int n[], int M_size, int N_size)
{
  int i = N_size;
  int j = 0, k = 0;
  while (k < (N_size + M_size))
  {
    if (m[i] <= n[j])
    {
      m[k++] = m[i++];
    } else
    {
      m[k++] = n[j++];
    }
  }
  while(j<N_size)
  {
    m[k++] = n[j++];
  }
}

void move_to_end(int m[], int size)
{
  int end=size-1;
  int i = 0;
  for (i=size-1; i>=0; i--)
  {
    if (m[i] != NULL)
    {
      m[end] = m[i];
      end--;
    }
  }
}

void print_array(int m[], int size)
{
  for (int i=0; i<size; i++)
  {
    cout << m[i] << " ";
  }
}

int main()
{
  int m[] = {1,5, NULL,6,7, NULL, 8, NULL};
  int n[] = {4,10,15};
  int N_size = sizeof(n)/ sizeof(n[0]);
  int M_size = (sizeof(m)/ sizeof(m[0]))-N_size;
  move_to_end(m, M_size+N_size);
  merge_array(m, n, M_size, N_size);
  print_array(m, M_size+N_size);
  return 0;
}