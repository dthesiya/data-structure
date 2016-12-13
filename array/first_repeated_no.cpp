//
// Created by Priyank Vora on 12/11/16.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int first_repeted(int A[], int n)
{
  int max = INT_MIN;
  unordered_map<int, int> hashmap;
  unordered_map<int, int>::iterator it;
  for(int i=0; i<n; i++)
  {
    if(hashmap.find(A[i]) != hashmap.end())
    {
      if(hashmap[A[i]] > 0)
      {
        hashmap[A[i]] = -hashmap[A[i]];
      }
    }
    else
    {
      hashmap[A[i]] = (i+1);
    }
  }

  for(it = hashmap.begin(); it != hashmap.end(); ++it)
  {
    if(max <= it->second && it->second<0)
    {
      max = it->second;
    }
  }
  return A[abs(max)-1];
}

int main()
{
  int A[] = {8, 2, 1, 2, 3};
  int n = sizeof(A)/ sizeof(A[0]);
  int res = first_repeted(A, n);
  cout << res << endl;
  return 0;
}