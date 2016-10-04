//
// Created by Priyank Vora on 10/3/16.
//
#include <iostream>

using namespace std;


void swapThree(int &a, int &b, int &c)
{

  a = a ^ b ^ c;


  b = a ^ b ^ c;

  c = a ^ b ^ c;

  a = a ^ b ^ c;
}

int main()
{
  int a = 10, b = 20, c = 30;

  cout << "Before swapping a = " << a << ", b = "
       << b << ", c = " << c << endl;

  swapThree(a, b, c);

  cout << "After swapping a = " << a << ", b = "
       << b << ", c = " << c << endl;

  return 0;
}
