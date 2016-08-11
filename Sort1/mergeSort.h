#include<iostream>
using namespace std;
#include<stack>




//void MergeSort_NonR(int* A,int* tmp, int n)
//{
//	int step = 2,  cur = 0;
//	int left = 0, right = 0, mid = 0;
//	
//	while (step <= n)
//	{
//		cur = 0;
//		while (cur + step < n)
//		{
//			right = cur + step, left = cur;
//			 mid = (left + right) / 2;
//			_Merge(A, tmp, left, mid, mid + 1, right);
//			cur += step;
//		}
//		if (cur < n - 1)
//		{
//			 mid = (cur + n-1) / 2;
//			_Merge(A, tmp, cur, mid, mid + 1, n);
//		}
//		step *= 2;
//	}
//	mid = (0 + n-1) / 2;
//	_Merge(A, tmp, 0, mid, mid + 1, n - 1);
//			
//}






int* mergeSort(int* A, int n)
{
	if (A == NULL || n <= 0)
		return A;
	int* tmp = new int[n];
	memset(tmp, 0, sizeof(tmp));
	_MergeSort(A, tmp, 0, n - 1);
	delete[] tmp;
	return A;

}

void _MergeSort(int arr[], int* tmp, int left, int right)
{
	if (left < right)//gap=2后，两两进行合并放入tmp中
	{
		int mid = left + (right - left) / 2;
		_MergeSort(arr, tmp, left, mid);
		_MergeSort(arr, tmp, mid + 1, right);
		_Merge(arr, tmp, left, mid, mid + 1, right);
		for (int i = left; i <= right; i++)
		{
			arr[i] = tmp[i];
		}
	}
}


void _Merge(int arr[], int* tmp, int begin1, int end1, int begin2, int end2)
{
	int index = begin1;
	while (begin1 <= end1&&begin2 <= end2)
	{
		tmp[index++] = arr[begin1]<arr[begin2] ? arr[begin1++] : arr[begin2++];
	}
	while (begin1 <= end1)
	{
		tmp[index++] = arr[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = arr[begin2++];
	}
}