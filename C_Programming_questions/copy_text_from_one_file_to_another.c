//
// Created by Priyank Vora on 11/20/16.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp1;
  FILE *fp2;
  char c;

  fp1 = fopen("sample.txt", "r");
  fp2 = fopen("output.txt", "w");

  while(1)
  {
    c = getc(fp1);
    if(c == EOF)
      break;
    else
      putc(c, fp2);
  }
  fclose(fp1);
  fclose(fp2);
}