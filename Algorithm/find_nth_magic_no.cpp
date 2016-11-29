//
// Created by Priyank Vora on 11/28/16.
//

#include <iostream>
#include <math.h>

#define LIMIT 256

using namespace std;

int find_magic(int no)
{
  int sum = 0;
  for(int i=1; i<=LIMIT; i++)
  {
    if (no & 1)
    {
      sum = sum + pow(5,i);
    }
    no = no >> 1;
  }
  return sum;
}


int main()
{
  cout << "Enter no";
  int no;
  cin >> no;
  cout << find_magic(no);
  return 0;
}