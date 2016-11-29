//
// Created by Priyank Vora on 11/28/16.
//

#include <iostream>

using namespace std;

int Max_Subarray_XOR(int arr[], int n)
{
  int maxi = INT_MIN;

    for(int i=0; i<n; i++)
    {
      int Xor = 0;
      for(int j=i; j<n; j++)
      {
        Xor = Xor ^ arr[j];
        maxi = max(maxi, Xor);
      }
    }
  return maxi;
}


int main()
{
  int arr[] = {1,2,3,4};
  int size = sizeof(arr)/ sizeof(arr[0]);
  cout << Max_Subarray_XOR(arr, size);
  return 0;
}