#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��������
extern void sdd(int a, int b);
void sdd(int a, int b);
//��������
void sdd(int a, int b)//��������
{
	int temp = a;
	a = b;
	b = temp;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
//�������ַ����Ƿ���ͬ
char ass(char ch1[], char ch2[])
{
	int i = 0;
	while (ch1[i] == ch2[i])
	{
		if (ch1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return ch1[i] == ch2[i] ? 1 : -1;
}

int aff()//�޲κ���
{
	 return  printf("�޲κ���\n");
}
//ð����������
void bubblesort(int arr[], int len)
{
	for (int i = 0;i < len-1;i++)
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
int main8()
{
	int a=10;
	int b=20;
    sdd(a,b);
	
	/*char ch1[]={"hell"};
	char ch2[]={"hell"};
	scanf("%s %s", ch1, ch2);
	int val = ass(ch1, ch2);
	if (val == 0)
		printf("�����ַ�����ͬ\n");
	else
		printf("�����ַ�����ͬ\n");*/


	aff();
	exit(404);//�˳�����
	int arr[] = { 9,8,6,4,3,6,1,2,5,10 };
	bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}