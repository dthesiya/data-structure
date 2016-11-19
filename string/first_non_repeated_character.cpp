//
// Created by Priyank Vora on 11/18/16.
//

#include <iostream>
#include <map>

using namespace std;

// using O(n2)
/*
char First_non_repeat(char *str, int n)
{
  int i, j, repeated;
  for (i=0; i<n; i++)
  {
    repeated = 0;
    for (j=0; j<n; j++)
    {
      if (i!=j && str[i] == str[j])
      {
        repeated=1;
        break;
      }
    }
    if(repeated == 0)
    {
      return str[i];
    }
  }
}
*/

//using hashmap time - O(n) and space = O(n)
char First_non_repeat(char *str, int n)
{
  map<char,int> hashmap;
  for(int i=0; i<n; i++)
  {
    if(hashmap.find(str[i]) != hashmap.end())
    {
      hashmap[str[i]]++;
    }
    else
    {
      hashmap[str[i]]++;
    }
  }
  for(int i=0; i<n; i++)
  {
    if (hashmap[str[i]] == 1)
      return str[i];
  }
}

int main()
{
  char str[] = "abacdcdc";
  char res = First_non_repeat(str, strlen(str));
  cout << res << endl;
  return 0;
}