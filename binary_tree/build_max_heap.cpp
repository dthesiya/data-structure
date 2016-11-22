//
// Created by Priyank Vora on 11/21/16.
//

#include <iostream>

using namespace std;

void Max_Heap(int arr[], int i, int heapsize)
{
  int l = 2*i;
  int r = (2*i)+1;
  int largest;

  if(l<heapsize && arr[i] < arr[l])
  {
    largest = l;
  }
  else
  {
    largest = i;
  }

  if(r<heapsize && arr[largest] < arr[r])
  {
    largest = r;
  }

  if(i != largest)
  {
    swap(arr[i], arr[largest]);
  }

  Max_Heap(arr, largest, heapsize);
}



void build_heap(int arr[])
{
  int length = sizeof(arr)/ sizeof(arr[0]);
  int heapsize = length;
  for(int i=length/2; i>=1; i--)
  {
    Max_Heap(arr, i, heapsize);
  }
}

int main()
{
  int arr[] = {4,8,3,5,1,9,2};
  build_heap(arr);
  return 0;
}