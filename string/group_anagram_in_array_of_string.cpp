//
// Created by Priyank Vora on 11/18/16.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> Group_Anagram(string list[], int n)
{
  map<int, int> hashmap;
  vector<string> res;
  for(int i=0; i<n; i++)
  {
    int counter = 0;
    int sum = 0;
    for( int j=0; j<list[i].length(); j++)
    {
      sum += list[i][j];
      counter++;
      if (counter == list[i].length())
      {
        counter = 0;
        if(hashmap.find(sum) != hashmap.end())
        {
          if(list[i].length() == list[hashmap[sum]].length())
          {
            res.push_back(list[hashmap[sum]]);
            res.push_back(list[i]);
          }
        }
        else
        {
          hashmap[sum] = i;
        }
      }
    }
  }
  for(int i=0; i<n; i++)
  {
    if(find(res.begin(), res.end(), list[i]) == res.end())
    {
      res.push_back(list[i]);
    }
  }
  return res;
}

int main()
{
  string list[] = {"cat", "dog", "tac", "god", "priyank"};
  int n = sizeof(list)/ sizeof(list[0]);
  vector<string> result = Group_Anagram(list, n);
  vector<string>::iterator it;
  for(it=result.begin(); it != result.end(); ++it)
    cout << *it << " ";
  return 0;
}