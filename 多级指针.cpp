#include<stdio.h>

int main18()
{
	int a[] = { 1,2,3 };
	int b[] = { 2,3,4 };
	int c[] = { 4,5,6 };
	//ָ��������һ������Ķ�ά����ģ��
	//ָ�������뵱�ڶ���ָ��
	int* arr[] = { a,b,c };

	int** p = arr;

	//printf("%d", **p);//arr[0][0] a[0]
	//����ָ���ƫ�����൱��������һ��һά�����С
	//printf("%d", **(p + 1));

	//һ��ָ���ƫ�����൱��������һ��Ԫ��
	printf("%d", *( * p + 1));

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			//printf("%d", p[i][j]);
			//printf("%d", *(p[i] + j));
			printf("%d", *(*(p + i) + j));
		}
		puts(" ");
	}
	return 0;
}

int main19()
{
	int a = 10;//����
	int b = 200;
	int c = 13;
	int d = 20;
	int* p = &a;//һ��ָ��ָ�����

	//pp����ָ�������ֵ��*ppһ��ָ���ֵ��**pp������ֵ
	int** pp = &p;//����ָ��ָ��һ��ָ��

	//ppp����ָ�������ֵ��*ppp����ָ���ֵ��**pppһ��ָ���ֵ ***ppp������ֵ
	int*** ppp = &pp;//����ָ��ָ�����ָ��

	p = &d;
	**ppp = &c;
	*pp = &b;
	

	printf("%d\n", ***ppp);
	printf("%d\n", **pp);
	printf("%d\n", *p);
	printf("%d\n", a);

	return 0;
}

void zhi(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//ָ����Ϊ��������
void dizhi(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main20()//ֵ���ݺ͵�ַ����
{
	int a = 10;
	int b = 120;
	//ֵ�����ββ�Ӱ��ʵ�ε�ֵ
	//zhi(a, b);

	//��ַ�����βο��Ըı�ʵ�ε�ֵ
	dizhi(&a, &b);

	printf("%d ", a);
	printf("%d ", b);
	return 0;
}

