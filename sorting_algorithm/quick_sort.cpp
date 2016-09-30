//
// Created by Priyank Vora on 9/29/16.
//

#include <iostream>
#include <algorithm>

using namespace std;

int Partition(int *A, int start, int end)
{
  int pivot = A[end];
  int partitionindex = start;
  for (int i=start ; i<end ; i++)
  {
    if (A[i] <= pivot)
    {
      swap(A[i],A[partitionindex]);
      partitionindex++;
    }
  }
  swap(A[partitionindex], A[end]);
  return partitionindex;
}

void QuickSort(int *A, int start, int end)
{
  if (start <= end)
  {
    int partitionindex = Partition(A, start, end);
    QuickSort(A, start, partitionindex-1);
    QuickSort(A, partitionindex+1, end);
  }
}

int main()
{
  int A[] = {9,8,7,6,5,4,3,2,1};
  cout << "Before sorting: ";
  for (int i=0; i<9; i++)
    cout << A[i] << " ";
  cout << "\n" << "After Sorting: ";
  QuickSort(A, 0, 9);
  for (int i=0; i<9; i++)
    cout << A[i] << " ";
  cout << endl;
  return 0;
}