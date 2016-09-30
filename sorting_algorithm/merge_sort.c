//
// Created by Priyank Vora on 9/29/16.
//

#include <stdio.h>
#include <stdlib.h>

void Merge(int *A, int *L, int left_size, int *R, int right_size)
{
  int i=0, j=0, k=0;
  while (i<left_size && j<right_size)
  {
    if (L[i] < R[j])
      A[k++] = L[i++];
    else
      A[k++] = R[j++];
  }
  while(i<left_size)
    A[k++] = L[i++];
  while(j<right_size)
    A[k++] = R[j++];
}


void MergeSort(int *A, int n)
{
  int mid, i, *L, *R;
  if (n<2)
    return;
  mid = n/2;
  L = (int*)malloc(mid* sizeof(int));
  R = (int*)malloc((n-mid)* sizeof(int));

  for (i = 0; i<mid; i++)
    L[i] = A[i];
  for (i = mid; i<n; i++)
    R[i-mid] = A[i];

  MergeSort(L, mid);
  MergeSort(R, n-mid);

  Merge(A, L, mid, R, n-mid);

  free(L);
  free(R);
}

int main()
{
  int A[] = {4,5,3,7,8,2,1,9,6};
  int i, number = sizeof(A)/ sizeof(A[0]);

  printf("Before Sorting: ");
  for (i=0; i<number; i++)
    printf("%d", A[i]);
  printf("\n");

  MergeSort(A, number);

  printf("After Sorting: ");
  for (i=0; i<number; i++)
    printf("%d", A[i]);
  printf("\n");
  return 0;
}