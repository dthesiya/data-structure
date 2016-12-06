//
// Created by Priyank Vora on 12/6/16.
//

#include <iostream>

using namespace std;

int MATRIX_SIZE = 4;
int MaxLevel = MATRIX_SIZE / 2;

int main()
{
  int count = 0;
  int m[MATRIX_SIZE][MATRIX_SIZE];
  int last = MATRIX_SIZE-1;
  int level = 0;

  for (int i=0; i<MATRIX_SIZE; i++)
  {
    for (int j=0; j<MATRIX_SIZE; j++)
    {
      m[i][j] = count++;
    }
  }
  cout << "Original Matrix" << endl;
  for (int i=0; i<MATRIX_SIZE; i++)
  {
    for (int j=0; j<MATRIX_SIZE; j++)
    {
      cout << m[i][j];
      if(m[i][j] < 10)
        cout << "      ";
      else if(m[i][j] < 100)
        cout << "     ";
      else
        cout << "    ";
    }
    cout << endl;
  }

  while(level < MaxLevel)
  {
    for(int i = level; i<last; i++)
    {
      swap(m[level][i], m[i][last]);
      swap(m[level][i], m[last][last-i+level]);
      swap(m[level][i], m[last-i+level][level]);
    }
    level++;
    last--;
  }

  cout << endl;
  cout << "Rotated Matrix" << endl;
  for (int i=0; i<MATRIX_SIZE; i++)
  {
    for (int j=0; j<MATRIX_SIZE; j++)
    {
      cout << m[i][j];
      if(m[i][j] < 10)
        cout << "      ";
      else if(m[i][j] < 100)
        cout << "     ";
      else
        cout << "    ";
    }
    cout << endl;
  }
  return 0;
}