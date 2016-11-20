//
// Created by Priyank Vora on 11/20/16.
//

#include <stdio.h>

int main()
{
  char c;
  FILE *fp;
  fp = fopen(__FILE__, "r");
  do{
    c = getc(fp);
    putchar(c);
  }
  while (c != EOF);
  return 0;
}