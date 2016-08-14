#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

string findSmallest(vector<string> strs, int n) 
{
	string res;
	int size = strs.size();
	struct Compare
	{
		bool operator()(const string& a, const string& b)const
		{
			return a + b < b + a;
		}
	};
	sort(strs.begin(), strs.end(), Compare());//这里要注意
	for (int i = 0; i < size; i++)
		res += strs[i];

	return res;
}