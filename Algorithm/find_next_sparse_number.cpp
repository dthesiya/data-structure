//
// Created by Priyank Vora on 11/28/16.
//

#include <iostream>

using namespace std;

// sparse no has no more than one consecutive 1 set in binary

bool isSparse(int n)
{
  return (n & (n<<1)) ? 0 : 1;
}


// time complexity is O(nlogn)

int next_parse(int n)
{
  while(1)
  {
    if(isSparse(n))
      return n;
    else
      n++;
  }
}


int main()
{
  int n = 6;
  cout << next_parse(n);
  return 0;
}