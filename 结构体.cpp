#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

//����ṹ��
struct stdon
{
	char name[24];
	int age;
	int score;
	char addr[51];
}s1;//�ṹ�����

int main47()
{
	//�����ṹ�����
	//struct stdon st1;

	//�ṹ�帳ֵ
	//struct stdon st1 = { "����",18,129,"�Ĵ��ɶ�" };

	//st1.score = 130;
	//st1.age = 18;
	//strcpy(st1.name, "����");
	//strcpy(st1.addr, "�Ĵ��ɶ�");
	
	//�ṹ����������
	//scanf("%s%d%d%s", st1.name, &st1.age, &st1.score, st1.addr);

	/*printf("������%s\n", st1.name);
	printf("���䣺%d\n", st1.age);
	printf("������%d\n", st1.score);
	printf("��ַ��%s\n", st1.addr);*/
	return 0;
}


//�ṹ������
int main48()
{
	struct stdon st1[3] =
	{
		{"����",11,100,"�Ĵ�"},
		{"������",12,120,"����"},
		{"������",13,140,"����"}
	};
	//�ṹ����������
	for (int i = 0;i < 3 - 1;i++)
	{
		for (int j = 0;j < 3 - 1 - i;j++)
		{
			if (st1[j].age > st1[j + 1].age)
			{
				struct stdon temp = st1[j];
				st1[j] = st1[j + 1];
				st1[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < 3;i++)
	{
		printf("������%s\n", st1[i].name);
		printf("���䣺%d\n", st1[i].age);
		printf("������%d\n", st1[i].score);
		printf("��ַ��%s\n\n", st1[i].addr);
	}
	return 0;
}

//���ٶѿռ�洢�ṹ��
typedef struct stdon s;
int main49()
{
	s* p = (s*)malloc(sizeof(s) * 3);

	for (int i = 0;i < 3;i++)
	{
		scanf("%s%d%d%s",p[i].name,&p[i].age,&p[i].score,p[i].addr);
	}
	for (int i = 0;i < 3;i++)
	{
		printf("������%s\n", p[i].name);
		printf("���䣺%d\n", p[i].age);
		printf("������%d\n", p[i].score);
		printf("��ַ��%s\n\n", p[i].addr);
	}
	return 0;
}


//�ṹ��Ƕ�׽ṹ��
struct scores
{
	int c;
	int cpp;
	int cs;
};
struct student
{
	char name[21];
	int age;
	struct scores ss;//Ƕ�׵Ľṹ��
	char addr[21];
};
//typedef struct studnet st;
int main50()
{
	struct student stu ={"С��",18,100,100,100,"�Ĵ�"};

	//�ṹ�帳ֵ s1����Ӱ��stu �����ǳ����
	struct student s1 = stu;
	strcpy(s1.name, "����");
	printf("%s\n",s1.name);

	printf("������%s\n", stu.name);
	printf("���䣺%d\n", stu.age);
	printf("������%d;%d;%d\n",stu.ss.c,stu.ss.cpp,stu.ss.cs);
	printf("��ַ��%s\n\n", stu.addr);

	printf("ѧ���ṹ���С��%d\n", sizeof(stu));
	printf("�����ṹ���С��%d\n", sizeof(stu.ss));
	printf("���������С��%d\n", sizeof(stu.name));
	return 0;
}