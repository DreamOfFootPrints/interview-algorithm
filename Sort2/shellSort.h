#include<iostream>
using namespace std;


int* shellSort(int* A, int n) 
{
	if (A == NULL || n == 0)
		return A;
	int gap = n;
	while (gap>1)
	{
		gap = gap / 2 + 1;
		for (int i = 0; i<n - gap;i++)
		{
			int end = i;
			int tmp = A[end + gap];
			while (end >= 0 && A[end]>tmp)
			{
				A[end +gap] = A[end];
				end -= gap;
			}
			A[end + gap] = tmp;
		}
	}
	return A;
}