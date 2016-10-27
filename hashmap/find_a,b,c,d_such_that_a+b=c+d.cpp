//
// Created by Priyank Vora on 10/26/16.
//

#include <iostream>
#include <unordered_map>

using namespace std;

bool FindPairs(int arr[], int n)
{
  unordered_map<int, pair<int, int> > hashmap;
  for (int i=0; i<n; i++)
  {
    for (int j=i+1; j<n; j++)
    {
      int sum = arr[i] + arr[j];
      if (hashmap.find(sum) != hashmap.end())
      {
        pair<int, int> pp = hashmap[sum];
        cout << "(" << pp.first << "," << pp.second << ") , (" << arr[i] << "," << arr[j] << ")" << endl;
        return true;
      }
      else
      {
        hashmap[sum] = make_pair(arr[i],arr[j]);
      }
    }
  }
  return false;


}


int main()
{
  int arr[] = {3, 4, 7, 1, 12, 9};
  int size = sizeof(arr)/ sizeof(arr[0]);
  FindPairs(arr, size);
  return 0;
}