//
// Created by Priyank Vora on 11/20/16.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  int n = 5;
  char ch;
  fp = fopen("/Users/priyank/Documents/git/data-structure/C_Programming_questions/test.txt", "r");
  fseek(fp, 0, SEEK_END);

  long length = ftell(fp);

  fseek(fp, (length-n), SEEK_SET);

  do{
    ch = fgetc(fp);
    fputc(ch, stdout);
  }
  while(ch != EOF);
  return 0;
}