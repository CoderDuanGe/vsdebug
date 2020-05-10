// section_1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string.h"
#include <assert.h>

class student
{
public:
	student(const char*name,int score)
	{
		assert(name != NULL);
		int len = strlen(name);
		_name = new char[len+1];
		strcpy(_name,name);
		_score = score;
	}
	~student()
	{
		delete []_name;
	}
	const char*name()
	{
		return _name;
	}
	int score()
	{
		return _score;
	}
private:
	char *_name;
	int _score;
};
void test_loop(int num)
{
	for(int i=0;i<num;i++)
	{
		int j = i* i;
		//do something
		printf("j is %d\n",j);

	}
}
void print_student(student& stu)
{
	printf("name:%s,score:%d\n",stu.name(),stu.score());
}
int main(int argc, _TCHAR* argv[])
{
	int loop = 100;
	test_loop(loop);
	student stu("Jack",90);
	print_student(stu);
	char *name=NULL;
	student stu2(name,90);
	return 0;
}

