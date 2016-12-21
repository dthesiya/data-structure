 //
// Created by Priyank Vora on 11/26/16.
//

#include <iostream>

using namespace std;



 // heap solution
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

void find_kth_largest(int arr[], int size, int k)
{
  int count = 0;
  for(int i=size/2 -1; i>=0; i--)
  {
    heapify(arr, i, size);
  }

  for(int i=size-1; i>= 0; i--)
  {
    if(count < k)
    {
      swap(arr[0], arr[i]);
      cout << arr[i] << " ";
      heapify(arr, 0, i);
    }
    count++;
  }
}

int main()
{
  int arr[] = {5,8,3,4,9,1};
  int size = sizeof(arr)/ sizeof(arr[0]);

  find_kth_largest(arr, size, 3);

  return 0;
}


 // priority queue = O(n)
 int findkthlargest(int arr[], int k)
 {
   priority_queue<int> pq(arr.begin(), nums.end());
   for(int i=0; i<k-1; i++)
   {
     pq.pop();
   }
   return pq.top();
 }

 // multiset = O(n)
 int findkthlargest(int arr[], int k)
 {
   multiset<int> mset;
   int n = arr.size();
   for(int i=0; i<n; i++)
   {
     mset.insert(arr[i]);
     if(mset.size > k)
       mset.erase(mset.begin());
   }
   return *mset.begin();
 }