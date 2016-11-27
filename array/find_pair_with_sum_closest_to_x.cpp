//
// Created by Priyank Vora on 11/26/16.
//

#include <iostream>


using namespace std;

void find_pair(int arr[], int n, int sum)
{
  int l_res, r_res;
  int l = 0;
  int r = n-1;
  int diff = INT_MAX;

  while(l<r)
  {
    if(abs(arr[l] + arr[r] - sum) < diff)
    {
      l_res = arr[l];
      r_res = arr[r];
      diff = abs(arr[l] + arr[r] - sum);
    }

    if(arr[l] + arr[r] > sum)
    {
      r--;
    }
    else
    {
      l++;
    }
  }
  cout << l_res << " and " << r_res << endl;
}

int main()
{
  int arr[] = {10, 22, 28, 29, 30, 40};
  int n = sizeof(arr)/ sizeof(arr[0]);

  find_pair(arr, n, 54);

  return 0;
}