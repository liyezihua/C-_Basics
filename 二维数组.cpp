#include <stdio.h>

int main4() {
	//��ά����ѭ�����룬ѭ�����
	//�������� ������ [��][��];
	/*int arr[5][3];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//ѧ���ɼ�
	/*int arr[5][3];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			//printf("%d ", arr[i][j]);
			sum += arr[j][i];
		}
		printf("��%d��ѧ�����ܳɼ�Ϊ��%d\t ƽ���ɼ�Ϊ%d\n", i + 1, sum, sum / 3);
	}*/

	//��ά����
	//�������� ������ [��][��][��];
	int arr[2][3][4] =
	{
		{
			{1,2,3,4},
		    {2,3,4,5},
		    {3,4,5,6}
		},
	    {
			{4,5,6,7},
		    {5,6,7,8},
		    {6,7,8,9}
        }
	};
	//��ά����������
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			for (int k = 0;k < 4;k++)
			{
				printf("%d ", arr[i][j][k]);
			}
		}
		printf("\n");
	}
	printf("��ά����Ĵ�С��%d\n", sizeof(arr));
	printf("��ά�����һ���С��%d\n", sizeof(arr[0]));
	printf("��ά�����һ�д�С��%d\n", sizeof(arr[0][0]));
	printf("��ά�����һ�д�С��%d\n", sizeof(arr[0][0][0]));

	printf("�㣺%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("�У�%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("�У�%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));

	return 0;
}

