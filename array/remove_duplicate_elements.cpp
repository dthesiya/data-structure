//
// Created by Priyank Vora on 11/14/16.
//
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> Remove_Duplicate(int A[], int n)
{
  vector<int> temp;
  map<int, int> hashmap;
  for(int i=0; i< sizeof(A)-1; i++)
  {
    if (hashmap.find(A[i]) == hashmap.end())
    {
      hashmap[A[i]];
      temp.push_back(A[i]);
    }
    else
    {
      continue;
    }
  }
  return temp;
}



int main()
{
  int A[] = {2,5,2,3,8,9,5,3,3,5};
  int n = sizeof(A)/ sizeof(A[0]);
  vector<int> sol;
  sol = Remove_Duplicate(A, n);
  for (int i=0; i<sol.size(); i++){
    cout << sol[i] << " ";
  }
  return 0;
}