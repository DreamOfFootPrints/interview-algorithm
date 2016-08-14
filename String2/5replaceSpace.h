#include<iostream>
using namespace std;
#include<string>


string replaceSpace(string iniString, int length)
{
	int size = iniString.size();
	if (size == 0) return iniString;

	int nb = 0;
	for (int i = 0; i < size; i++)
	{
		if (iniString[i] == ' ') nb++;
	}

	int newSize = size + 2 * nb;
	iniString.resize(newSize);//resize和tail的关系一定要处理好
	int tail = newSize - 1;
	for (int i = size - 1; i >= 0; i--)
	{
		if (iniString[i] == ' ')
		{
			iniString[tail--] = '0';
			iniString[tail--] = '2';
			iniString[tail--] = '%';
		}
		else
		{
			iniString[tail--] = iniString[i];
		}
	}
	return iniString;
}










