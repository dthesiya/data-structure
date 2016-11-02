//
// Created by Priyank Vora on 10/31/16.
//


#include <iostream>

using namespace std;

int min(int y, int z)
{
  return y + ((z-y) & ((z-y)>>(sizeof(int) * 8 -1)));
}

int FindMin(int x, int y, int z)
{
  return min(x, min(y,z));
}

int main()
{
  cout << FindMin(2,4,8) << endl;
  return 0;
}