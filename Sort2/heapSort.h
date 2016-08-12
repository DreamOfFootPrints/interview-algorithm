#include<iostream>
using namespace std;


void AdjustDown(int* arr, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size&&arr[child + 1] > arr[child])
			child++;
		if (arr[child] > arr[parent])
		{
			std::swap(arr[child], arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

int* heapSort(int* A, int n)
{
	if (A == NULL || n < 0)
		return A;

	for (int i = (n - 1) / 2; i >= 0; i--)//parent
	{
		AdjustDown(A, n, i);
	}

	for (int i = 0; i < n; i++)
	{
		std::swap(A[0], A[n-1-i]);
		AdjustDown(A, n-i-1, 0);
	}
	return A;

}




















