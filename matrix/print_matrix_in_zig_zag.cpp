//
// Created by Priyank Vora on 11/16/16.
//

#include <iostream>

using namespace std;

void Print_ZigZag(int A[4][4], int n)
{
  int i = 0, j=0;
  while(i<n)
  {
    for (j=0; j<n; j++)
    {
      cout << A[i][j] << " ";
    }
    i++;
    for (j=n-1; j>=0; j--)
    {
      cout << A[i][j] << " ";
    }
    i++;
  }
}

int main()
  {
    int A[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    Print_ZigZag(A, 4);
    return 0;
  }