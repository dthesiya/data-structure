//
// Created by Priyank Vora on 11/28/16.
//

#include <iostream>

using namespace std;

// O(n) time complexity

int sum_of_diff_bits(int arr[], int n)
{
  int sum = 0;
  for(int i=0; i<32; i++)
  {
    int count= 0;
    for(int j=0; j<n; j++)
    {
      if((arr[j] >> i) & 1)
      {
        count++;
      }
    }
    sum = sum + (count * (n-count) * 2);
  }
  return sum;
}

int main()
{
  int arr[] = {1,3,5};
  int n = sizeof(arr)/ sizeof(arr[0]);
  cout << sum_of_diff_bits(arr, n);
  return 0;
}