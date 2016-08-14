#include<iostream>
using namespace std;
#include<string>





bool chkParenthesis(string A, int n) 
{
	int size = A.size();
	if (size == 0) return true;
	if (size & 1 != 0) return false;


	int status = 0;
	for (int i = 0; i < size; i++)
	{
		if (A[i] != '('&&A[i] != ')')
			return false;
		else if (A[i] == '(')
			++status;
		else
		{
			if (status-- == 0)
				return false;
		}
	}
	return true;
}