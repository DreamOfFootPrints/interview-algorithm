#include<iostream>
using namespace std;
#include<string>


string reverseSentence(string A, int n) 
{
	int size = A.size();
	if (size == 0) return A;

	int left = -1, right = -1;
	for (int i = 0; i < size; i++)
	{
		if (A[i] != ' ')
		{
			left = i == 0 || A[i - 1] == ' ' ? i : left;
			right = i == size - 1 || A[i + 1] == ' ' ? i : right;
		}
		if (left != -1 && right != -1)
		{
			reverse(A.begin() + left, A.begin() + right + 1);
			left = -1, right = -1;
		}
	}
	reverse(A.begin(), A.end());
	return A;
}