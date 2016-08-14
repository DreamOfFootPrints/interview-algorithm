#include<iostream>
using namespace std;
#include<string>


string stringTranslation(string A, int n, int len) 
{
	if (n < 0 || len < 0) return A;

	reverse(A.begin(), A.begin() + len );
	reverse(A.begin() + len , A.end());
	reverse(A.begin(), A.end());
	return A;
}