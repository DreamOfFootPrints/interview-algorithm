#include<iostream>
using namespace std;



int* insertionSort(int* A, int n)
{
	if (A == NULL || n < 0)
		return A;

	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = A[i + 1];
		while (end >= 0 && A[end]>tmp)
		{
			A[end + 1] = A[end];
			end--;

		}
		A[end + 1] = tmp;
	}
	return A;
}