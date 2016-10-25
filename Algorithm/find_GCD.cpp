//
// Created by Priyank Vora on 10/24/16.
//

#include <iostream>

using namespace std;

int FindGCD(int a, int b)
{
  int divident = a>=b ? a : b;
  int divisor = a<=b ? a : b;
  while(divisor!=0)
  {
    int reminder = divident % divisor;
    divident = divisor;
    divisor = reminder;
  }
  return divident;
}

int main()
{
  int a = 2;
  int b = 8;
  int result = FindGCD(a,b);
  cout << "GCD is: " << result << endl;
  return 0;
}

