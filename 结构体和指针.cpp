#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

//�ṹ���ԱΪָ��
struct student
{
	char* name;
	int age;
	int* score;
	char* addr;
};

int main51()
{
	struct student stu;
	//stu.name =(char*)"����";
	//���ٶѿռ�洢�ṹ��
	stu.name = (char*)malloc(sizeof(char*) * 21);
	stu.score = (int*)malloc(sizeof(int*) * 3);
	stu.addr = (char*)malloc(sizeof(char*) * 51);
	strcpy(stu.name, "����");
	stu.age = 18;
	stu.score[0] = 100;
	stu.score[1] = 99;
	stu.score[2] = 120;
	strcpy(stu.addr, "�Ĵ�");

	printf("������%s\n", stu.name);
	printf("���䣺%d\n", stu.age);
	printf("������%d\n",stu.score[0]);
	printf("������%d\n", stu.score[1]);
	printf("������%d\n", stu.score[2]);
	printf("��ַ��%s\n\n", stu.addr);
	//�ͷ�
	free(stu.name);
	free(stu.score);
	free(stu.addr);

	return 0;
}

struct stu
{
	char name[21];
	int age;
	int score[3];
	char addr[51];
};
int main52()
{
	//printf("I\n\nL\no\nv\ne\n\nG\nP\nL\nT");

	//�ṹ��ָ�� ͨ��ָ��ָ��ṹ�����
	struct stu s = { "С��",18,100,100,100,"�Ĵ�" };
	struct stu* p= &s;

	//�ṹ��ָ��->��Ա  ͨ��ָ����ʽṹ���Ա
	//�ṹ�����.��Ա
	printf("%s\n",p->name);
	printf("%d\n", p->age);
	printf("%d\n", p->score[0]);
	printf("%d\n", p->score[1]);
	printf("%d\n", p->score[2]);
	printf("%s\n", p->addr);
	return 0;
}



typedef struct stu1 ss;
struct stu1
{
	char *name;
	int age;
	int *score;
	char *addr;
};
int main53()
{
	//���ٶѿռ�洢�ṹ��
	ss* p = (ss*)malloc(sizeof(ss*) * 3);

	for (int i = 0;i < 3;i++)
	{
		p[i].name = (char*)malloc(sizeof(char) * 21);
		p[i].score = (int*)malloc(sizeof(char) * 3);
		p[i].addr = (char*)malloc(sizeof(char) * 51);
	}
	//����
	for (int i = 0;i < 3;i++)
	{
		scanf("%s%d%d%s", p[i].name, &p[i].age, 
			p[i].score[0],p[i].score[1],p[i].score[2], p[i].addr);
	}
	//��ӡ
	for (int i = 0;i < 3;i++)
	{
		printf("������%s\n", p[i].name);
		printf("���䣺%d\n", p[i].age);
		printf("������%d\n", p[i].score[0]);
		printf("������%d\n", p[i].score[1]);
		printf("������%d\n", p[i].score[2]);
		printf("��ַ��%s\n\n", p[i].addr);
	}
	//�ͷ�
	for (int i = 0;i < 3;i++)
	{
		free(p[i].name);
		free(p[i].score);
		free(p[i].addr);
	}
	

	return 0;
}

