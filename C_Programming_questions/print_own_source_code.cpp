//
// Created by Priyank Vora on 11/20/16.
//

#include <stdio.h>

int main()
{
  File *fp;
  fp = fopen(__FILE__, "r");
  do{
    char c = getc(fp);
    putc(c);
  }
  while (c != EOF));
  return 0;
}