//
// Created by Priyank Vora on 10/10/16.
//

// get count of all set bits at odd and even and then make difference of them. if that is multiple of 3 then no is Multiple
// of 3.

#include <iostream>

using namespace std;

int MultiplyWith3(int n)
{
  int odd = 0;
  int even = 0;
  if (n == 0)
    return 1;
  if (n == 1)
    return 0;
  while(n)
  {
    if (n & 1)
      odd++;
    n = n >> 1;

    if (n & 1)
      even++;
    n = n >> 1;
  }
  return MultiplyWith3(abs(odd-even));
}




int main()
{
  int n;
  cout << "Please enter no: ";
  cin >> n;
  if(MultiplyWith3(n))
    cout << "Yes.." << endl;
  else
    cout << "No.." << endl;
  return 0;
}