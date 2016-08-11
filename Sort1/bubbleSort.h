#include<iostream>
using namespace std;


//Ò»¶¨Òª×ÐÏ¸
int* bubbleSort(int* A, int n) 
{
	if (A == NULL || n <= 0)
		return A;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (A[ j ] > A[j + 1])
			{
				std::swap(A[j], A[j + 1]);
			}
		}
	}
	return A;
}