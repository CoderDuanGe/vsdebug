// tang.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <ShlObj.h>
int main(int argc, _TCHAR* argv[])
{CSIDL_COMMON_DOCUMENTS
	int arr[100];
	char* test="Tom";
	char name[100]={0};
	for(int i=0;i<3;i++)
	{
		name[i]=test[i];
	}
	printf("name=%s\n",name);
	char *p=new char[100];
	printf("%s\n",p);
	return 0;
}

