#include<iostream>
using namespace std;



int* selectionSort(int* A, int n) 
{
	if (A == NULL || n <= 0)
		return A;

	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		for (int i = left; i <= right; i++)
		{
			if (A[i] <= A[left])
				std::swap(A[left], A[i]);
			if (A[i] >= A[right])
				std::swap(A[i], A[right]);
		}
		left++, right--;
	}
	return A;
}