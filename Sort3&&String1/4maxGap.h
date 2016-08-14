#include<iostream>
using namespace std;
#include<vector>

enum status
{
	EXIST,NOEXIST
};
int maxGap(vector<int> A, int n) 
{
	int sizee = A.size();
	if (n == 0) return 0;
	
	int max = A[0], min = A[0];
	for (int i = 0; i < n; i++)
	{
		max = max > A[i] ? max: A[i];
		min = min > A[i] ? A[i] : min;
	}
	if (max == min) return 0;
	int len = max - min + 1;
	//��������Ͱ��Ȼ��ֱ�������е����ֵ����Сֵ
	int* buckerMax = new int[n + 1]();
	int* buckerMin = new int[n + 1]();
	status* buckerStatus = new status[n + 1];
	for (int i = 0; i < n + 1; i++)
		buckerStatus[i] = NOEXIST;
	for (int i = 0; i < n; i++)
	{
		int index = (A[i] - min)*len / (max - min);
		buckerMax[index] = buckerMax[index]>A[i]?buckerMax[index] : A[i];
		buckerMin[index] = buckerMin[index]<A[i] ? buckerMin[index] : A[i];
		buckerStatus[index] = EXIST;
	}
	int res = -1;
	int lastMax = buckerMax[0];//��Ϊ��֤������Сֵ��0�����ֵ��n+1�����Կ�����ôд��Ҫ��Ȼ��Ҫ�ȿ�ʼ�����ж�
	for (int i = 0; i < n; i++)
	{
		if (buckerStatus[i] == EXIST)
		{
			res = res > (buckerMin[i] - lastMax) ? res : (buckerMin[i] - lastMax);
			lastMax = buckerMax[i];
		}
	}
	return res;

}