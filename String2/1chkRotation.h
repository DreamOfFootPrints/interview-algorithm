#include<iostream>
using namespace std;
#include<string>

bool chkRotation(string A, int lena, string B, int lenb) 
{
	if (A.size() != B.size()) return false;

	string AB = A + A;//是加上两个A，注意
	return AB.find(B) != string::npos;
}