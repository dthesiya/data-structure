//
// Created by Priyank Vora on 11/10/16.
//

#include <stdio.h>
#include <string.h>

// worst case complexity is O(m(n-m+1))

void search_pattern(char *text, char *pat)
{
  int M = strlen(text);
  int N = strlen(pat);

  for (int i=0; i<=M-N; i++)
  {
    int j;
    for (j=0; j<N; j++)
    {
      if (text[i+j] != pat[j])
        break;
    }
    if (j == N)
      printf("pattern at index : %d \n", i);
  }
}


int main()
{
  char text[] = "AABCAABCAADETAABC";
  char pat[] = "AABC";
  search_pattern(text, pat);
  return 0;
}
