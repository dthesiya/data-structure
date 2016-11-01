//
// Created by Priyank Vora on 10/31/16.
//

#include<iostream>

using namespace std;

int Add(int x, int y)
{
while (y != 0)
  {
    int carry = x & y;
    x = x ^ y;
    y = carry << 1;
  }
  return x;
}

int main()
{
  cout << Add(5, 7) << endl;
  return 0;
}