//
// Created by Priyank Vora on 10/26/16.
//

#include <iostream>
#include <unordered_map>

using namespace std;

void FindPair(int A[][2])
{
  unordered_map<int, int> hashmap;
  for (int i=0;i<5;i++)
  {
    int first = A[i][0];
    int second = A[i][1];
    if (hashmap[second] == first)
    {
      cout << "(" << second << "," << first << ")" << endl;
    }
    else
    {
      hashmap[first] = second;
    }
  }
  }


int main()
{

  int A[][2] = {{11,20}, {30,40},{5,10}, {40,30}, {10,5}};
  FindPair(A);
  return 0;
}
