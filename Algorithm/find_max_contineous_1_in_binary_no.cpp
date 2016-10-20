//
// Created by Priyank Vora on 10/18/16.
//

#include <iostream>

using namespace std;

int FindNo(int n)
{
  int count=0;
  while(n != 0)
  {
    n = n & (n<<1);
    count++;
  }
  return count;
}


int main()
{
  int n= 63;
  int result =  FindNo(n);
  cout << result << endl;
  return 0;
}