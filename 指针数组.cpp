#include<stdio.h>

int main12()
{
	//ָ�������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p;
	p = arr;//ָ��pָ������arr���ڴ��ַ
	printf("%p\n", p);
	printf("%p\n", arr);
	*p = 100;

	for (int i = 0;i < 10;i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", p[i]);
		//printf("%d\n", *(arr+1));//ָ�����ͱ�����һ��ͬ���ڴ��ַ+sizeof(int)
		//printf("%d\n", *(p+i));
		printf("%d\n", *p++);
	}
	/*printf("%p\n", p);
	printf("%p\n", arr);*/

	//����ָ������õ���������ָ��֮���ƫ������������
	int stp = p - arr;
	printf("%d", stp);


	return 0;
}

//������Ϊ�����������˻�Ϊָ�� ��ʧ����ľ���
void bubblerost(int* arr, int len)
{
	printf("%d\n", sizeof(arr));

	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				/*int temp = arr[j];//�������
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				if (*(arr + j) > *(arr + j + 1))//ָ�����
				{
					int temp = *(arr + j);
					*(arr + j) = *(arr + j + 1);
					*(arr + j + 1) = temp;
				}
			}
		}
	}
}

int main13()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	bubblerost(arr, 10);

	for (int i = 0;i < 10;i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}


int main16()
{
	//����ָ������

	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a,&b,&c };

	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)//����
	{
		printf("%d\n", *arr[i]);
	}

	printf("%d\n", *arr[0]);
	printf("ָ�������С��%d", sizeof(arr));
	printf("ָ��Ԫ�ش�С��%d", sizeof(arr[0]));

	return 0;
}

int main17()
{
	int a[] = { 1,2,3 };
	int b[] = { 2,3,4 };
	int c[] = { 4,5,6 };
	//ָ��������һ������Ķ�ά����ģ��
	//ָ�������뵱�ڶ���ָ��
	int* arr[] = { a,b,c };

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			//printf("%d ",arr[i][j]);
			//printf("%d", *(arr[i] + j));
			printf("%d ", *(*(arr + i) + j));
		}
		puts(" ");
	}


	return 0;
}