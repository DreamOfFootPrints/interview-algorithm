#include<iostream>
using namespace std;
#include<vector>



int shortestSubsequence(vector<int> A, int n)
{
	int size = A.size();
	if (n == 0) return 0;

	int max = A[0], noMaxIndex = -1;
	for (int i = 0; i < n; i++)
	{
		if (max <= A[i])
			max = A[i];
		else
			noMaxIndex = i;
	}
	if (noMaxIndex == -1) return 0;

	int min = A[size - 1], noMinIndex = -1;
	for (int i = size - 1; i >= 0; i--)
	{
		if (min >= A[i])
			min = A[i];
		else
			noMinIndex = i;
	}
	return noMaxIndex - noMinIndex + 1;


}