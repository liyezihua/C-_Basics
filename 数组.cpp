#include <stdio.h>
#include <iostream>
using namespace std;
#define SIZE 10
int main3()//3
{
	//int sum=0;//�����
	//int sum1 = 0;//����ƽ����
	//int arrt[100] = { 1,2,3,4,5,6,7 };
	//for (int i = 9;i >= 0;i--)
	//{
	//	sum = sum + arrt[i];
	//}
	//sum1=sum / 7;
	//printf("%d\n", sum);
	//printf("%d\n", sum1);


	//ѭ������,ѭ�����
	//int arr[SIZE];
	//int sum = 0;
	//for (int i = 0; i < SIZE; i++) {
	//	scanf("%d", &arr[i]);
	//}
	//for (int j = 0; j < SIZE; j++)
	//{

	//	printf("%d\n", arr[j]);
	//}


	//���齻��
	//int arr[SIZE];
	//for (int i = 0;i < SIZE;i++)
	//{
	//	//scanf("%d", &arr[i]);
	//	cin >> arr[i];
	//}
	//int max = 0;
	//for (int i = 0;i < SIZE;i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("���ص�С������Ϊ��%d\n", max);


	//��������
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	while (i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++; 
		j--;
	}
	for (int i = 0;i < 10;i++)
	{
		printf(" %d ", arr[i]);
	}*/

	//ð������
	//int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	//int temp = 0;
	//for (int i = 0;i < 10 - 1;i++)//��������
	//{
	//	for (int j = 0;j < 10 - 1 - i;j++)//�ڲ������
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//for (int i = 0;i < 10;i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	return 0;
}