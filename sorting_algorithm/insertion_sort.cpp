#include<iostream>

using namespace std;

void Insertion_Sort(int A[], int n)
{
	for (int i=1; i<n; i++)
	{
		for (int j=0; j<i; j++)
		{
			if (A[j] > A[i])
				{
				int temp = A[j];
				A[j] = A[i];
				A[i] = temp;
				}
		}
	}
}


int main()
{
	int A[] = {5,4,3,2,1};
	Insertion_Sort(A, 5);
	for (int i=0; i<5; i++)
	{
		cout << A[i] << "\n";
	}
return 0;
}
