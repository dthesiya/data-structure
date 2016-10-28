//
// Created by Priyank Vora on 10/27/16.
//

#include <iostream>

using namespace std;

bool Isunique(char str[])
{
  int count[256] = {0};
  for (int i=0; str[i]; i++)
  {
    count[str[i]]++;
  }
  for(int i=0; i<256; i++)
  {
    if(count[i]>1)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  char str[] = "priyank";
  if(Isunique(str))
    cout << "Yess..." << endl;
  else
    cout << "Noooo..." << endl;
  return 0;
}
