#include<iostream>
using namespace std;
#include<string>

bool chkRotation(string A, int lena, string B, int lenb) 
{
	if (A.size() != B.size()) return false;

	string AB = A + A;//�Ǽ�������A��ע��
	return AB.find(B) != string::npos;
}