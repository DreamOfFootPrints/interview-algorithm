#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//
////非比较排序时间复杂度和空间复杂度是和序列的范围有关的
////其他的排序：是随机的和序列的顺序是没有什么关系的
////使用插入排序：O(K*N)
////答案：堆排序：O(N*lgk)
//
//
//void AdjustDown(vector<int>& arr, int size, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (child + 1 < size&&arr[child + 1] > arr[child])
//			child++;
//		if (arr[child] > arr[parent])
//		{
//			std::swap(arr[child], arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
////建一个小根堆，然后不断的弹出，不断的向右滑，不断的弹出数据
////这个堆是单独建的，有额外的空间复杂度
//
//vector<int> sortElement(vector<int> A, int n, int k) 
//{
//	int size = A.size();
//	if (size == 0 || k <= 1) return A;
//
//	vector<int> bucket;
//	for (int i = 0; i < k; i++)
//		bucket.push_back(A[i]);
//
//	for (int i = (k - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(bucket, n, i);
//	}
//
//	int index = 0;
//	for (int i = k + 1; i < n-k; i++)
//	{
//		A[index++] = bucket[0];
//		bucket[0] = A[i];
//		AdjustDown(bucket, n, 0);
//	}
//	
//	sort(A.begin() + n - k, A.end());
//	return A;
//}