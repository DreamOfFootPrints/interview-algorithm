#include<iostream>
using namespace std;
#include<vector>

vector<int> sortThreeColor(vector<int> A, int n) 
{
	int size = A.size();
	if (size == 0) return A;

	int left = -1, right = size, i = 0;
	while (i<right)
	{
		int cur = A[i];
		if (cur == 0 && ++left != i)
		{
			std::swap(A[left], A[i]);
			i++;
		}
		else if (cur==2&&--right!=i)
		{
			std::swap(A[i], A[right]);
			/*i = A[i] == 2 ? i + 1 : i;*///没有这句话因为right会逐步的逼近
		}
		else
		{
			i++;
		}
	}
	return A;
}