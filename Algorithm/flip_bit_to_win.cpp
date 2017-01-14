//
// Created by Priyank Vora on 1/14/17.
//

//
// Created by Priyank Vora on 10/31/16.
//

#include <iostream>

using namespace std;

int FlipBitToWin(int n)
{
  if(~n == 0)
    return 32;

  int current_length = 0;
  int previous_length = 0;
  int max_length = 1;

  while(n != 0)
  {
    if(n & 1 == 1)
    {
      current_length++;
    }

    else if(n & 1 == 0)
    {
      previous_length = (n & 2 == 0) ? 0 : current_length;
      current_length = 0;
    }

    max_length = max(previous_length + current_length + 1, max_length);
    n = n >> 1;
  }
  return max_length;
}

int main()
{
  int n = 91;
  int res = FlipBitToWin(n);
  cout << res << endl;
  return 0;
}