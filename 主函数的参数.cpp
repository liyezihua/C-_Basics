#include<stdio.h>

//int argc ��ʾ���ݵĲ���
//gcc -o hello hello.c (4������) "gcc" "-o" "hello" "hello.c"
//char*argv[]={"gcc" "-o" "hello" "hello.c"}  ��ʾ������������
int main28(int argc,char*argv[])
{
	//gcc  cmd����
	if (argc < 3)
	{
		printf("ȱ�ٲ���");
		return -1;
	}

	for (int i = 0;i < argc;i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}