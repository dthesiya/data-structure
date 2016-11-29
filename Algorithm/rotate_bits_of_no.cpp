//
// Created by Priyank Vora on 11/28/16.
//


#include <iostream>

using namespace std;

// ans in one line
// n<<d | n>>(32-d)


void Rotate_bits(int no, int rotate)
{
  for(int i=0; i<rotate; i++)
  {
    int temp = no & 0x80000000;
    no = no << 1;
    no = no | temp;
  }
  cout << no;
}

int main()
{
  int no = 16;
  int rotate = 2;
  Rotate_bits(no, rotate);
  return 0;
}
