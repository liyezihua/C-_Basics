#include<stdio.h>

void strcpy(char* dest, char* ch)//�����ַ�������
{
	int i = 0;
	while (ch[i])
	{
		dest[i] = ch[i];
		i++;
	}
	dest[i] = 0;
}

void strcpy1(char* dest, char* ch)//ָ���ƫ����
{
	int i = 0;
	while (*(ch+i))
	{
		*(dest + i) = *(ch + i);
		i++;
	}
	*(dest + i) = 0;
}

void strcpy2(char* dest, char* ch)//ָ��
{
	while (*ch)
	{
		*dest = *ch;
		*dest++;//ָ���һ�൱��ָ��ָ����һ����ַ �ڴ��ַ�仯��sizeof(char)
		*ch++;
	}
	*dest = 0;
}

void strcpy3(char* dest, char* ch)
{
	while (*dest++ = *ch++);
}

int main14()
{
	char ch[] = { "hello" };
	char dest[100];

	strcpy1(dest, ch);
	printf("%s\n", dest);
	return 0;
}

int main15()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int* p;
	p = &arr[3];
	//printf("%p\n", p);
	//printf("%p\n", arr);
	//p--;//ָ��ļӼ������ָ��������й�
	//p--;
	//p--;
	//�ڴ��ַ����� 12 / sizeof(int) = ƫ����
	int stp = p - arr;
	printf("%d\n", stp);
	printf("%p\n", arr);

	printf("%d\n", p[-1]);//*(p-1)

	return 0;

}