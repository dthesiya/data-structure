//
// Created by Priyank Vora on 10/31/16.
//

#include <iostream>

using namespace std;

int TotalSetBit(int n)
{
  int sum = 0;
  int count = 0;
  for(int i=1; i<=n; i++)
  {
    int j = i;
    while(j)
    {
      j = j & (j-1);
      count += 1;
    }
    sum = sum + count;
    count = 0;
  }
  return sum;
}

int main()
{
  int n = 7;
  int res = TotalSetBit(n);
  cout << res << endl;
  return 0;
}