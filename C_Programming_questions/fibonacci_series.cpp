//
// Created by Priyank Vora on 10/24/16.
//

#include <iostream>

using namespace std;

// no of fibonacci if [5*(n^2)+4] or [5*(n^2)-4] is perfect square

// dynamic programming
// time = O(n)
// space = O(n)
int main()
{
  int arr[40];
  arr[0] = 0;
  arr[1] = 1;
  for(int i=2; i<40; i++)
  {
    arr[i] = arr[i-1] + arr[i-2];
  }
  for (int j=0; j<40; j++)
    cout << arr[j] << " ";
  cout << endl;
  return 0;
}


// recursion
int Fib(int n)
{
  if(n<=1)
    return n;
  return Fib(n-1)+Fib(n-2);
}

// space optimization
// time = O(n)
// space = O(1)
int main()
{
  int a,b,c;
  a = 0;
  b = 1;
  for(int i=2; i<40; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  for (int j=0; j<40; j++)
    cout << arr[j] << " ";
  cout << endl;
  return 0;
}