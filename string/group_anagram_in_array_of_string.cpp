//
// Created by Priyank Vora on 11/18/16.
//

#include <iostream>
#include <vector>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
  return a.second < b.second;
}

void Group_Anagram(vector<string> &A)
{
  vector<pair<int, string>> dup;
  for(int i=0; i<A.size(); i++)
  {
    string temp = A[i];
    sort(temp.begin(), temp.end());
    dup.push_back(make_pair(i, temp));
  }

  sort(dup.begin(), dup.end(), cmp);

  for(int i=0; i<dup.size(); i++)
  {
    cout << A[dup[i].first] << " ";
  }
}

int main()
{
  vector<string> A= {"cat", "dog", "tac", "god", "priyank"};
  Group_Anagram(A);
  return 0;
}