//
// Created by Priyank Vora on 10/24/16.
//

#include <stdio.h>

int main()
{
  FILE *fp;
  char c;
  fp = fopen(__FILE__, "r");
  do{
    c = getc(fp);
    putchar(c);
  }
  while(c!=EOF);
  fclose(fp);
  return 0;
}