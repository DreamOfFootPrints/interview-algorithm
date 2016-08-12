#include<iostream>
using namespace std;


int* countingSort(int* A, int n)
{
	if (A == NULL || n < 0)
		return A;

	int max = A[0], min = A[0];
	for (int i = 1; i < n; i++)
	{
		max = max < A[i] ? A[i] : max;
		min = min > A[i] ? A[i] : min;
	}

	int range = max - min + 1;
	int* count = new int[range]();
	memset(count, 0, sizeof(count));

	for (int i = 0; i < n; i++)
		count[A[i] - min]++;

	int index = 0;
	int i = 0;
	while (i<range)
	{
		if (count[i]-- != 0)
			A[index++] = i + min;
		else
			i++;
	}
	return A;

}





















