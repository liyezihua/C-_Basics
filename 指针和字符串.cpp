#include<stdio.h>

int main25()
{
	char ch[] = "hello world";//ջ���ַ���
	//char* pp = "hello world";//�������������ַ���
	char* p = ch;

	ch[2] = 'm';
	//p[2] = 'k';

	printf("%s\n", ch);
	printf("%s\n", p);
	printf("%p\n", &ch);
	printf("%p\n", &p);
	return 0;
}

int main26()
{
	//�ַ�������
	char ch1[] = "hello";
	char ch2[] = "borld";
	char ch3[] = "asjsjjsjfsfsfs";
	char* arr[] = { ch1,ch2,ch3 };

	//�ַ�������
	for (int i = 0;i < 3-1;i++)
	{
		for (int j = 0;j < 3 - 1 - i;j++)
		{
			//�ҵ�����ĸ���бȽ�
			if (arr[j][0] > arr[j + 1][0])
			{
				//����ָ������Ԫ�ؽ�������
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0;i < 3;i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}


//�ַ�ָ����Ϊ��������
//�����ַ�����Ч���� ���鷽ʽ
int strlen(char* ch)
{
	int i = 0;
	while (ch[i]!='\0')i++;
	return i;
}
//�����ַ�����Ч���� ָ�뷽ʽ
int strlen2(char* ch)
{
	char* temp = ch;
	while (*temp!='\0')temp++;
	return temp - ch;
}

int main27()
{
	char ch[] = "hello world";

	int len = strlen2(ch);
	printf("%d", len);

	return 0;
}