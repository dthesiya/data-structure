//
// Created by Priyank Vora on 11/16/16.
//

#include <iostream>

using namespace std;

void Print_Spiral(int A[4][4], int r, int c)
{
  int i=0, m=0, n=0;

  while(m<r && n<c)
  {
    for (i=n; i<c; i++)
    {
      cout << A[m][i] << " ";
    }
    m++;

    for (i=m; i<r; i++)
    {
      cout << A[i][c-1] << " ";
    }
    c--;

    if(m<r)
    {
      for (i=c-1; i>=n; i--)
      {
        cout << A[r-1][i] << " ";
      }
      r--;
    }
    if(n<c)
    {
      for (i=r-1; i>=m; i--)
      {
        cout << A[i][n] << " ";
      }
      n++;
    }
  }
}


int main()
{
  int A[4][4] = {{1,2,3,4},{8,7,6,5},{9,10,11,12},{16,15,14,13}};
  Print_Spiral(A, 4, 4);
  return 0;
}