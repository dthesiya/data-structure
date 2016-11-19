//
// Created by Priyank Vora on 11/18/16.
//

#include <iostream>

using namespace std;

/*
// time = O(nlogn)
bool Is_Anagram(char *str1, char *str2)
{
  if (strlen(str1) != strlen(str2))
    return false;
  sort(str1, (str1+strlen(str1)));
  sort(str2, (str2+strlen(str2)));
  for(int i=0; i<strlen(str1); i++)
  {
    if(str1[i] != str2[i])
      return false;
  }
  return true;
}
*/

// time = n  and space = n
bool Is_Anagram(char *str1, char *str2)
{
  int count1[256] = {0};
  int count2[256] = {0};

  if(strlen(str1) != strlen(str2))
    return false;

  for (int i=0; str1[i] && str2[i]; i++)
  {
    count1[str1[i]]++;
    count2[str2[i]]++;
  }

  for(int i=0; i<256; i++)
  {
    if(count1[i] != count2[i])
      return false;
  }
  return true;
}



int main()
{
  char str1[] = "vora";
  char str2[] = "aovr";
  if(Is_Anagram(str1, str2))
    cout << "True";
  else
    cout << "False";
  return 0;
}