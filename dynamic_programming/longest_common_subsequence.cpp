//
// Created by Priyank Vora on 12/12/16.
//

#include <iostream>

using namespace std;

void Longest_Common_Subsequence(char A[], char B[], int m, int n)
{
  int L[m+1][n+1];

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
      }

      else
      {
        L[i][j] = max(L[i-1][j], L[i][j-1]);
      }
    }
  }

  int no_of_lcs = L[m][n];
  char Ans[no_of_lcs+1];
  Ans[no_of_lcs] = '\0';

  int i = m, j = n;

  while(i>0 && j>0)
  {
    if(A[i-1] == B[j-1])
    {
      Ans[no_of_lcs-1] = A[i-1];
      no_of_lcs--;
      i--;
      j--;
    }
    else if(L[i-1][j] > L[i][j-1])
    {
      i--;
    }
    else
    {
      j--;
    }
  }
  cout << "LCS of " << A << " and " << B << " is " << Ans << endl;
}

int main()
{
  char A[] = "abcdaf";
  char B[] = "acbcf";

  int m = sizeof(A)/ sizeof(A[0]);
  int n = sizeof(B)/ sizeof(B[0]);

  Longest_Common_Subsequence(A, B, m, n);

  return 0;
}