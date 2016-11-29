//
// Created by Priyank Vora on 11/28/16.
//

#include <iostream>

using namespace std;

int main()
{
  int n = 23;
  int even = n & 0xAAAAAAAA;
  int odd = n & 0x55555555;
  even = even >> 1;
  odd = odd << 1;
  cout << (even | odd);
  return 0;
}