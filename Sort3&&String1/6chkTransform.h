#include<iostream>
using namespace std;
#include<vector>


bool chkTransform(string A, int lena, string B, int lenb) 
{
	int size1 = A.size(), size2 = B.size();

	if (size1 != size2) return false;

	int map[256] = { 0 };
	for (int i = 0; i < size1; i++)
		map[A[i]]++;
	for (int i = 0; i < size2; i++)
	{
		if (map[B[i]]-- == 0)
			return false;
	}
	return true;
}