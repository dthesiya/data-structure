//
// Created by Priyank Vora on 12/20/16.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> smaller_than_self(vector<int>& nums)
{
  if (nums.empty())
    return {};

  vector<int> hash;
  vector<int> counts(nums.size());

  for (int i = nums.size() - 1; i >= 0; --i)
  {
    auto end = lower_bound(hash.begin(), hash.end(), nums[i]);
    counts[i] = end - hash.begin();
    hash.insert(end, nums[i]);
  }
  return counts;
}



int main()
{
  vector<int> A = {5,2,6,1};
  vector<int> res;
  res = smaller_than_self(A);
  for(vector<int>::iterator it=res.begin(); it != res.end(); ++it)
  {
    cout << *it << " ";
  }
  return 0;
}