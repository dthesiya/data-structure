//
// Created by Priyank Vora on 11/18/16.
//

#include <iostream>

using namespace std;

void Swap(char *a, char *b)
{
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}


void Permute(char *str, int l, int r)
{
  if(l == r)
    cout << str << endl;
  else
  {
    for(int i=l; i<=r; i++)
    {
      Swap((str+l), (str+i));
      Permute(str, l+1, r);
      Swap((str+l), (str+i));
    }
  }
}

int main()
{
  char str[] = "abc";
  Permute(str, 0, strlen(str)-1);
  return 0;
}