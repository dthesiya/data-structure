//
// Created by Priyank Vora on 10/24/16.
//

#include <iostream>

using namespace std;

int FindFactorial(int low, int high)
{
  int fact=1, x=1;
  while(fact<low)
  {
    fact = fact*x;
    x++;
  }
  int res=0;
  while(fact<=high)
  {
    res++;
    fact=fact*x;
    x++;
  }
  return res;
}


int main()
{
  int a=2, b=720;
  int result = FindFactorial(a,b);
  cout << "Factorial between " << a << " and " << b << " is: " << result << endl;
  return 0;
}