#include<stdio.h>
#include<iostream>
using namespace std;
//new��ʹ��
int* func()
{
	//�ڶ���������������
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;

	//�����ɳ���Ա�����ͷ�
	//�ͷŶ����ռ�
	delete(p);
}

//�ڶ�����������
void test02()
{
	int* pp = new int(10);

	for (int i = 0;i < 10;i++)
	{
		pp[i] = 1 + 100;//��ʮ��Ԫ�ظ�ֵ
	}
	for (int i = 0;i < 10;i++)
	{
		cout << pp[i] << endl;
	}
	
	//�ͷŶѿռ�����
	delete[] pp;
}


int main()
{
	test01();
	test02();

	return 0;
}