//
// Created by Priyank Vora on 11/16/16.
//

#include <iostream>

using namespace std;

void Make_Boolean_Matrix(bool A[3][4], int r, int c)
{
  bool raw[r], col[c];
  int i,j;

  for (i=0; i<r; i++)
  {
    raw[i] = 0;
  }

  for (i=0; i<c; i++)
  {
    col[i] = 0;
  }

  for (i=0; i<r; i++)
  {
    for (j=0; j<c; j++)
    {
      if (A[i][j] == 1)
      {
        raw[i] = 1;
        col[j] = 1;
      }
    }
  }

  for (i=0; i<r; i++)
  {
    for (j=0; j<c; j++)
    {
      if (raw[i] == 1 || col[j] == 1 )
      {
        A[i][j] = 1;
       }
    }
  }
}


void print(bool A[3][4],int r, int c)
{
  int i,j;
  for (i=0; i<r; i++)
  {
    for (j=0; j<c; j++)
    {
      cout << A[i][j] << " ";
    }
    cout << "\n";
  }
}


int main()
{
  bool A[3][4] = { {1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
  print(A, 3,4);
  Make_Boolean_Matrix(A, 3, 4);
  cout << "\n";
  print(A,3,4);
  return 0;
}