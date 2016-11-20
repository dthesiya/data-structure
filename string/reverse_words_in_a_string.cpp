//
// Created by Priyank Vora on 11/19/16.
//

#include <iostream>

using namespace std;

void Reverse_one_string(char str[], int n)
{
  int i, j=n-1;
  char temp;
  for(i=0; i<j; i++, j--)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;

  }
}

void Reverse_Words(char str[])
{
  int i=0,j=0;
  Reverse_one_string(str, strlen(str));
  while(1)
  {
    if(*(str+j) == ' ' || *(str+j) == NULL)
    {
      Reverse_one_string((str+i),j-i);
      i=j+1;
    }
    if(*(str+j) == NULL)
    {
      break;
    }
    j++;
  }
}

int main()
{
  char str[] = "my name is priyank";
  int n = strlen(str);
  Reverse_Words(str);
  for(int i=0; i<n; i++)
    cout << str[i];
  cout << endl;
  return 0;
}