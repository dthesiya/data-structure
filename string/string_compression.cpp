//
// Created by Priyank Vora on 10/28/16.
//

#include <iostream>
#include <string>

using namespace std;

bool IsCompressed(string str)
{
  int sum = 0;
  for(string::size_type i=0; i<str.length(); i++)
  {
    if(str[i] == str[i+1])
    {
      continue;
    }
    else
    {
      sum = sum + 2;
    }
  }
  if (sum > str.length())
    return false;
  else
    return true;
}

int main()
{
  string str = "aabcccccaa";
  if(IsCompressed(str))
    cout << "yess" << endl;
  else
    cout << "Noo" << endl;
  return 0;
}