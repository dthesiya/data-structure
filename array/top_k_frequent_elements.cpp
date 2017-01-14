//
// Created by Priyank Vora on 1/8/17.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

vector<int> find_kth_top(vector<int>& nums, int k)
{
  unordered_map<int, int> hashmap;
  priority_queue<int, vector<int>, greater<int>> pq;
  for(auto i : nums)
  {
    hashmap[i]++;
  }s
  for(auto & i : hashmap)
  {
    pq.push(i.second);
    while(pq.size()>k)
    {
      pq.pop();
    }
  }
  vector<int> res;
  for(auto & i : hashmap)
  {
    if(i.second >= pq.top())
    {
      res.push_back(i.first);
    }
  }
  return res;
}



int main()
{
  vector<int> A = {1,3,3,2,1,1};
  vector<int> res = find_kth_top(A, 2);
  for(auto i : res)
  {
    cout << i << endl;
  }
  return 0;
}