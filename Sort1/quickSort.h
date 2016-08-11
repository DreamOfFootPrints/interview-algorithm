#include<iostream>
using namespace std;
#include<stack>



int Sort(int* A, int left, int right)
{
	int key = A[right];
	int cur = left, prev = left - 1;
	while (cur < right)
	{
		if (A[cur] < key&&++prev != cur)
		{
			std::swap(A[prev], A[cur]);
		}
		cur++;
	}
	std::swap(A[++prev], A[right]);
	return prev;
}

void _QuickSort_NonR(int* A, int n)
{
	int left = 0, right = n - 1;
	stack<int> s;
	if (left < right)
	{
		s.push(right);
		s.push(left);
	}
	while (!s.empty())
	{
		left = s.top();
		s.pop();
		right = s.top();
		s.pop();


		int div = Sort(A, left, right);
		if (left < div - 1)
		{
			s.push(div - 1);
			s.push(left);
		}
		if (div+1 < right)
		{
			s.push(right);
			s.push(div + 1);
		}
	}
}

int* quickSort(int* A, int n)
{
	if (A == NULL || n <= 0)
		return A;
	_QuickSort_NonR(A, n);
	return A;
}


//
//
//int Sort(int* A,int left,int right)
//{
//	int key = A[right];
//	int cur = left, prev = left - 1;
//	while (cur < right)
//	{
//		if (A[cur] < key&&++prev != cur)
//		{
//			std::swap(A[prev], A[cur]);
//		}
//		cur++;
//	}
//	std::swap(A[++prev], A[right]);
//	return prev;
//}
//
//
//void _QuickSort(int* A, int left, int right)
//{
//	if (left < right)
//	{
//		int div = Sort(A, left, right);
//		_QuickSort(A, left, div - 1);
//		_QuickSort(A, div + 1, right);
//	}
//}
//
//
//int* quickSort(int* A, int n) 
//{
//	if (A == NULL || n <= 0)
//		return A;
//	//_QuickSort(A, 0, n - 1);
//	_QuickSort_NonR(A, n);
//	return A;
//}