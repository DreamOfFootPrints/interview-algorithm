#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//
////�ǱȽ�����ʱ�临�ӶȺͿռ临�Ӷ��Ǻ����еķ�Χ�йص�
////����������������ĺ����е�˳����û��ʲô��ϵ��
////ʹ�ò�������O(K*N)
////�𰸣�������O(N*lgk)
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
////��һ��С���ѣ�Ȼ�󲻶ϵĵ��������ϵ����һ������ϵĵ�������
////������ǵ������ģ��ж���Ŀռ临�Ӷ�
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