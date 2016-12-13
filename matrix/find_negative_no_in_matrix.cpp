//
// Created by Priyank Vora on 12/12/16.
//

#include <iostream>

using namespace std;

int Find_Negative(int A[][4], int n, int m)
{
  int count = 0;
  int i=0, j=m-1;
  while(i<n && j>=0)
  {
    if(A[i][j] < 0)
    {
      count += (j+1);
      i++;
    }
    j--;
  }
  return count;
}


int main()
{
  int A[3][4] = {{-3,-2,-1,1},
               {-2,2,3,4},
               {4,5,7,8}};
  cout << Find_Negative(A, 3, 4);
  return 0;
}