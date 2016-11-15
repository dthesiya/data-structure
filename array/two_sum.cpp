//
// Created by Priyank Vora on 11/14/16.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
// O(n2)
vector<int> Two_Sum(int A[], int n, int sum)
{
  vector<int> temp;
  for(int i=0; i<n-1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] + A[j] == sum) {
        temp.push_back(i);
        temp.push_back(j);
        return temp;
      }
    }
  }
  return temp;
}
*/

// O(n) but using extra space
vector<int> Two_Sum(int A[], int n, int sum)
{
  vector<int> temp;
  unordered_map<int, int> hashmap;
  hashmap.clear();

  for(int i=0; i< n; i++)
  {
    hashmap[A[i]] = i;
  }

  for(int i=0; i< n; i++)
  {
    if (hashmap.find((sum-A[i])) != hashmap.end())
    {
      temp.push_back(i);
      temp.push_back(hashmap[sum-A[i]]);
      return temp;
    }
  }
  return temp;
}



int main()
{
  int A[] = {2,5,3,8,9};
  int n = 5;
  int sum = 10;
  vector<int> sol;
  sol = Two_Sum(A, n, sum);
  for (int i=0; i<sol.size(); i++){
    cout << sol[i] << " ";
  }
  return 0;
}