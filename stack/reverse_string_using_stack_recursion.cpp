//
// Created by Priyank Vora on 10/13/16.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void ReverseString(string S)
{
  size_t n = S.size();
  if (n == 1)
    cout << S << endl;
  else
  {
    cout << S[n-1];
    string S1 = S.substr(0, n-1);
    ReverseString(S1);
  }
}


int main()
{
  string S = "vora";
  cout << S << endl;
  ReverseString(S);
  return 0;
}