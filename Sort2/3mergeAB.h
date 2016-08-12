#include<iostream>
using namespace std;

//从后往前遍历
int* mergeAB(int* A, int* B, int n, int m)
{
	int end1 = n - 1;
	int end2 = m - 1;
	int index = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		A[index--] = A[end1] >= B[end2] ? A[end1--] : B[end2--];
	}
	while (end2 >= 0)
		A[index--] = B[end2--];
	return A;
}