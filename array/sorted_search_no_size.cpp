//
// Created by Priyank Vora on 1/11/17.
//

#include <iostream>

using namespace std;

bool binarysearch(int A[], int low, int high, int k)
{
  int mid = low + (high-low)/2;
  if(low > high)
    return false;
  if(A[mid] == k)
    return true;
  else if(A[mid] < k)
    return binarysearch(A, mid+1, high, k);
  else if(A[mid] > k)
    return binarysearch(A, low, mid-1, k);
  else
    return false;
}



int find_element(int A[], int k)
{
  int low = 0;
  int high = 1;
  while(low < high && A[high] != -1)
  {
    if(A[high] < k)
    {
      low = high;
      high = 2*high;
    }
    else
    {
      if(binarysearch(A, low, high, k))
        return 1;
      else
        return -1;
    }
  }
  return -1;
}


int main()
{
  int A [] = {1,3,7,8,10,20,25,35,36,38};
  if(find_element(A, 7) == -1)
    cout << "not found";
  else
    cout << "found";
}