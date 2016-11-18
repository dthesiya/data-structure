//
// Created by Priyank Vora on 11/18/16.
//
#include <iostream>

using namespace std;

/*
void show_memory(char *start, int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    printf("%.2x ",start[i]);
  }
  printf("\n");

}


int main()
{
  int i = 0x0123456789;
  show_memory((char *)&i, sizeof(i));
  return 0;
}
*/

int main()
{
  unsigned int i= 1;
  char *c = (char *)&i;
  if(*c)
  {
    cout << "little endian " << endl;
  }
  else
  {
    cout << "big endian" << endl;
  }
  return 0;
}

//a character pointer c is pointing to an integer i. Since size of character is 1 byte when the character pointer is
// de-referenced it will contain only first byte of integer. If machine is little endian then *c will
// be 1 (because last byte is stored first) and if machine is big endian then *c will be 0.