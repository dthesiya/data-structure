//
// Created by Priyank Vora on 10/26/16.
//

#include <iostream>
#include <unordered_map>
using namespace std;

int FindLargestSubarray(int arr[], int n)
{
  int sum=0, maxi=0;
  unordered_map<int , int> hash;

  for (int i=0; i<n; i++)
  {
    sum = sum+arr[i];

    if (arr[i] == 0 && maxi == 0)
      maxi = 1;
    if (sum == 0)
      maxi = i + 1;
    if (hash.find(sum) != hash.end())
    {
      maxi = max(maxi, i-hash[sum]);
    }
    else
    {
      hash[sum] = i;
    }
  }
  return maxi;
}


int main()
{
  int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int result = FindLargestSubarray(arr, size);
  cout << result << endl;
  return 0;
}