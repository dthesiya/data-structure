#include<iostream>

using namespace std;

void SelectionSort(int A[],int  n)
{
  for (int i=0; i<n-2; i++)
    {
      int min = i;
			for (int j=i+1; j<n-1; j++)
				{
					if (A[j] < A[min])
						min = j;
				}
			int temp = A[min];
			A[min] = A[i];    
			A[i] = temp;
	}
}

int main()
{
int A[] = {3,4,1,2,5};
SelectionSort(A,5);
for (int i=0; i<5; i++)
{
cout << A[i] << "\n";
}
return 0;
}
