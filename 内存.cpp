#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
using namespace std;
#define max 10
//ȫ�ֱ���
//��������Ŀ������
//�������ڣ����򴴽�������
//�洢λ�ã�������
int d = 0;

//��̬ȫ�ֱ���
//�����򣺶�����ļ���
//�������ڣ����򴴽�������
//�洢λ�ã�������
static int c = 0;

//ȫ�ֺ���
//��������Ŀ�������ļ�
//�������ڣ����򴴽�������
//�洢λ�ã�������

void str()
{
	//��̬����ֻ�ܱ���ʼ��һ�Σ����Զ�θ�ֵ
	static int c = 0;
	c++;
	printf("%d", c);
}

//��̬����
//�����򣺶��������ļ���
//�������ڣ����򴴽�������
//�洢λ�ã�������
static void sre1();

int main41()
{
	//�ֲ�����
	//�����򣺺����ڲ�
	//�������ڣ��ֲ�������������������
	//�洢λ�ã�ջ��
	int a = 0;

	//��̬�ֲ�����
	//�����򣺺����ڲ�
	//�������ڣ����򴴽�������
	//�洢λ�ã�������
	static int b = 0;
	for (int i = 0;i < 10;i++)
	{
		str();
	}
	return 0;
}

//ȫ�ֱ���
int a;
int a1 = 0;
//��̬ȫ�ֱ���
static int b;
static int b1 = 0;
int main42()
{
	//�ֲ�����
	int c;
	int c1 = 0;
	//��̬�ֲ�����
	static int d;
	static int d1 = 0;
	//����
	int arr[100];
	int arr1[] = { 0 };
	//ָ��
	int* p;
	int* p1 = NULL;

	char ch[100];
	char ch1[] = "\0";
	printf("δ��ʼ����ȫ�ֱ���%p\n", &a);
	printf("��ʼ����ȫ�ֱ���%p\n", &a1);
	printf("δ��ʼ���ľ�̬ȫ�ֱ���%p\n", &b);
	printf("��ʼ���ľ�̬ȫ�ֱ���%p\n", &b1);
	printf("δ��ʼ���ľֲ�����%p\n", &c);
	printf("��ʼ���ľֲ�����%p\n", &c1);
	printf("δ��ʼ���ľ�̬�ֲ�����%p\n", &d);
	printf("��ʼ���ľ�̬�ֲ�����%p\n", &d1);
	printf("δ��ʼ��������%p\n", &arr);
	printf("��ʼ��������%p\n", &arr1);
	printf("δ��ʼ����ָ��%p\n", &p);
	printf("��ʼ����ָ��%p\n", &p1);
	printf("δ��ʼ�����ַ���%p\n", &ch);
	printf("��ʼ�����ַ���%p\n", &ch1);
	return 0;
}

//�ѿռ�Ŀ���ʹ�ú��ͷ�
int main43()
{
	//ջ����С1M
	//int arr[210000] = { 0 };

	////���ٶѿռ�������
	//int* p = (int*)malloc(sizeof(int));

	//printf("%p\n", p);
	////ʹ�öѿռ�
	////int a = 110;
	//*p =111;

	//printf("%d\n", *p);
	////�ͷŶѿռ�
	//free(p);
	//p = NULL;

	int* pp = (int*)malloc(sizeof(int) * 8200000 * 100);
	printf("%p\n", pp);

	free(pp);

	return 0;
}

//�ѿռ�洢����
void bubblesor(int arr[], int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main44()
{
	srand((size_t)time(NULL));

	int* p = (int*)malloc(sizeof(int) * 10);

	for (int i = 0;i < max;i++)
	{
		p[i] = rand() % 100;
		printf("%d ", p[i]);
	}
	bubblesor(p, max);

	for (int i = 0;i < max;i++)
	{
		//printf("%d\n", p[i]);
		printf("%d\n", *p);
		p++;
	}

	free(p);
	return 0;
}

//�ڴ洦����
int main45()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//memset�����ڴ�ռ��ֵ
	//memset(p, 0, sizeof(int)*10);

	//memcpy�ڴ濽������ͬ��strcpy�ַ�����������\0����ֹͣ�����������ݺ��ֽ��й�
	//memcpy(p, arr, sizeof(int) * 10);

	//memmove�ڴ濽����memcpy��������Ŀ��dest��Դsrc��ָ�Ŀռ��ص�ʱ���ܴ�����Ч�ʱ�memcpy��һЩ
	memmove(&arr[5], &arr[3], 20);

	//memcmp�ڴ�Ƚ�
	int arr1[] = { 1,2,3,4,5,8,7 };
	int arr2[] = { 1,2,3,4,5 };
	int pp = memcmp(arr1, arr2, 20);
	printf("%d\n", pp);

	for (int i = 0;i < max;i++)
	{
		printf("%d\n", arr[i]);
	}
	free(p);
	return 0;
}


//���ٶ���ָ���Ӧ�Ķѿռ�
int main46()
{
	//int arr[5][3];
	//���ٶ���ָ���Ӧ�Ķѿռ�
	int** p = (int**)malloc(sizeof(int*) * 5);

	for (int i = 0;i < 5;i++)
	{
		//����һ��ָ���Ӧ�Ķѿռ�
		p[i] = (int*)malloc(sizeof(int*) * 3);
	}

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			scanf("%d ", p[i][j]);
		}
		printf("\n");
	}

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	//�ͷ�
	for (int i = 0;i < 5;i++)
	{
		//���ͷ��ڲ�
		free(p);
	}
	//�ͷ����
	free(p);
	return 0;
}