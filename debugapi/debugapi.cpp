// debugapi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int data=0;
void test(int i)
{
	data = i;
	if(data == 9999)
	{
		__debugbreak();		
	}
}
int main(int argc, _TCHAR* argv[])
{
	for(int i=0;i<10000;i++)
	{
		test(i);
	}
	return 0;
}

