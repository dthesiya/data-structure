//
// Created by Priyank Vora on 11/26/16.
//

#include <iostream>

using namespace std;

// time complexity of heapify is O(logn) and CreatandBuildHeap is O(n) and allover time of heap sort is O(nlogn).
// space complexity of heapify is O(logn) and heap sort is O(1)

void heapify(int arr[], int i, int size)
{
  int largest = i;
  int l = 2*i + 1;
  int r = 2*i + 2;

  if(l<size && arr[l] > arr[largest])
    largest = l;

  if(r<size && arr[r] > arr[largest])
    largest = r;

  if(largest != i)
  {
    swap(arr[i], arr[largest]);
    heapify(arr, largest, size);
  }
}


void heap_sort(int arr[], int size)
{
  for(int i=size/2 -1; i>=0; i--)
  {
    heapify(arr, i, size);
  }

  for(int i=size-1; i>= 0; i--)
  {
    swap(arr[0], arr[i]);

    heapify(arr, 0, i);
  }
}



int main()
{
  int arr[] = {5,8,3,4,9,1};
  int size = sizeof(arr)/ sizeof(arr[0]);

  heap_sort(arr, size);

  for(int i = 0; i<size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}