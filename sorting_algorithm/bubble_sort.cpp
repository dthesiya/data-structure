#include<iostream>

using namespace std;


void bubble_sort(int A[], int n)
{
	for (int i=0; i<n-1; i++)

		{
			for (int j=0; j<n-i-1; j++)
				{
					if (A[j] > A[j+1])
					{
						int temp = A[j];
						A[j] = A[j+1];
						A[j+1] = temp;
					}
				}
		}
}

int main()
{
int A[] = {5,4,3,2,1};
bubble_sort(A,5);
for (int i=0; i<5; i++)
	cout << A[i] << "\n";
return 0;
}	
