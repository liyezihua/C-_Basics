#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

//�ṹ�������Ϊ��������

typedef struct st s;
struct st
{
	char name[21];
	//char* name;//��ַ����
	int age;
	int score;
	char addr[51];
};

void fun1(s stu)
{
	strcpy(stu.name,"��");
	printf("%s\n", stu.name);
}

int main54()
{
	 s st1 ={"С",18,100,"�Ĵ�"};
	//st1.name = (char*)malloc(sizeof(char*) * 21);
	//strcpy(st1.name, "С");
	fun1(st1);
	printf("%s\n", st1.name);
	return 0;
}

void fun2(s* p)
{
	strcpy(p->name,"С��");
	printf("%s\n", p->name);
}

//������Ϊ���������˻�Ϊָ�� ��ʧԪ�ؾ��� ��Ҫ���ݸ���
void bubbie(s *stur, int len)
{
	//printf("%d\n", sizeof(stur));
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (stur[j].age > stur[j + 1].age)
			{
				s temp = stur[j];
				stur[j] = stur[j + 1];
				stur[j + 1] = temp;
			}
		}
	}
}
int main55()
{
	//�ṹ��ָ����Ϊ��������
	s stu = { "С��",19,10,"�Ĵ�" };
	fun2(&stu);
	printf("%s\n", stu.name);
	

	 s st2[3] =
	{
		{"����",11,100,"�Ĵ�"},
		{"������",12,120,"����"},
		{"������",13,140,"����"}
	};

	 bubbie(st2, 3);

	 for (int i = 0;i < 3;i++)
	 {
		 printf("������%s\n", st2[i].name);
		 printf("���䣺%d\n", st2[i].age);
		 printf("������%d\n", st2[i].score);
		 printf("��ַ��%s\n\n", st2[i].addr);
	 }
	 return 0;
}

int main56()
{
	s stt = { "С��",19,100,"�Ĵ�" };
	s str = { "����",11,100,"�Ĵ�" };
	//const���νṹ��ָ������
	//const s* p = &stt;
	//p = &str;//ok
	//p->age = 888;//err

	//const���νṹ��ָ�����
	//s* const p = &stt;
	//p = &str;//err
	//p->age = 888;//ok

	//const���νṹ��ָ�����ͺͱ���
	const s* const p = &stt;
	//p = &str;//err
	//p->age = 888;//err

	return 0;

}