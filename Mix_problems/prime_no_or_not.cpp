//
// Created by Priyank Vora on 10/6/16.
//

#include <iostream>

using namespace std;

bool IsPrime(int n)
{
  if (n<=1)
    return false;
  if (n<=3)
    return true;

  if (n%2 == 0 || n%3 == 0)
    return false;
  for (int i=5; i*i<n; i=i+6)
  {
    if(n%i == 0 || n%(i+2) == 0)
      return false;
  }
  return true;
}



int main()
{
  int n;
  cout << "Please enter number :";
  cin >> n;
  if(IsPrime(n))
    cout << "Yes it is prime" << endl;
  else
    cout << "Not Prime" << endl;
  return 0;
}