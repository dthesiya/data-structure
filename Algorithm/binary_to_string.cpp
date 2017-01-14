//
// Created by Priyank Vora on 1/14/17.
//

#include <iostream>

using namespace std;

int main()
{
  double n = 0.75;
  string res = "";
  if(n<0 || n>1)
    cout << "ERROR";

  res = res + "0.";

  while(n>0)
  {
    n = n*2;

    if(n>=1)
    {
      res = res + "1";
      n = n - 1.0;
    }

    else
      res = res + "0";
  }

  cout << res << endl;
return 0;
}