//
// Created by Priyank Vora on 12/15/16.
//

#include <iostream>

using namespace std;

void Longest_Common_Substring(char A[], char B[], int m, int n)
{
  int L[m+1][n+1];
  int max=0;
  for(int i=0; i<=m; i++)
  {
    for(int j=0; j<=n; j++)
    {
      if(i == 0 || j == 0)
      {
        L[i][j] = 0;
      }

      else if(A[i-1] == B[j-1])
      {
        L[i][j] = L[i-1][j-1]+1;
        if(max < L[i][j])
          max = L[i][j];
      }
      else
      {
        L[i][j] = 0;
      }
    }
  }
  cout << "LCS is " << max << endl;
}


int main()
{
  char A[] = "abcd";
  char B[] = "dbca";

  int m = sizeof(A)/ sizeof(A[0]);
  int n = sizeof(B)/ sizeof(B[0]);

  Longest_Common_Substring(A, B, m, n);

  return 0;
}