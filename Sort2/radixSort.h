#include<iostream>
using namespace std;
int GetMaxRadix(int* A, int n)
{
	int radix = 1;
	int max = 10;
	for (int i = 0; i < n; i++)
	{
		while (A[i] >= max)
		{
			radix++;
			max *= 10;
		}
	}
	return radix;
}

int* radixSort(int* A, int n)
{
	if (A == NULL || n == 0)
		return A;
	int maxRadix = GetMaxRadix(A, n);
	int count[10] = { 0 };
	int start[10] = { 0 };
	int* bucket = new int[n]();

	int radix = 1;
	for (int i = 0; i < maxRadix; i++)
	{
		memset(count, 0, sizeof(count));
		for (int j = 0; j < n; j++)
		{
			int index = (A[j] / radix) % 10;
			count[index]++;
		}
		start[0] = 0;
		for (int j = 1; j < 10; j++)
		{
			start[j] = start[j - 1] + count[j - 1];
		}

		for (int j = 0; j < n; j++)
		{
			int index = (A[j] / radix) % 10;
			bucket[start[index]++] = A[j];
		}

		memcpy(A, bucket, sizeof(int)*n);//数组名退化为首元素的地址
		radix *= 10;
	}
	delete[] bucket;
	return A;
}