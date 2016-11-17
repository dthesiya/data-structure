//
// Created by Priyank Vora on 11/16/16.
//

#include <iostream>

using namespace std;

int Search_in_Matrix(int A[4][4], int n, int no)
{
  int i=0, j=n-1;
  while(i<n && j>=0)
  {
    if (A[i][j] == no)
    {
      cout << "no " << no << " is at " << i << " and " << j << endl;
      return 1;
    }
    if (A[i][j] < no)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  cout << "no not found in matrix" << endl;
  return 0;
}


int main()
{
  int A[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
  Search_in_Matrix(A, 4, 29);
  return 0;
}