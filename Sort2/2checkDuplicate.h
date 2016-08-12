#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//递归都是有空间复杂度的，堆的递归为O(logN)
//答案：堆的非递归写法



void AdjustDown(vector<int>& arr, int size, int parent)
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

void heapSort(vector<int>& A, int n)
{
	if (A.size() == 0 || n < 0)
		return;
	for (int i = (n - 1) / 2; i >= 0; i--)//parent
	{
		AdjustDown(A, n, i);
	}

	for (int i = 0; i < n; i++)
	{
		std::swap(A[0], A[n - 1 - i]);
		AdjustDown(A, n - i - 1, 0);
	}
	

}


bool checkDuplicate(vector<int> a, int n) 
{
	heapSort(a, n);
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] == a[i])
			return true;
	}
	return false;
}