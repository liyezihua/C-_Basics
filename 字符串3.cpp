#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ַ�������
char* strchr1(char* ch, int c)
{
	while (*ch)
	{
		if (*ch == c)
			return ch;
		ch++;
	}
	return NULL;
}

int main38()
{
	char ch[] = "hello world";
	char c = 'l';
	char b[] = "llo";
	//�ַ�������
	//char* p = strchr(ch, c);
	//char* p = strchr1(ch, c);
	//�ַ����в����ַ���
	char* p = strstr(ch, b);
	printf("%s\n", p);

	return 0;
}
//�ַ����ָ�
int main39()
{
	//strtok�ַ�����ȡ���ƻ�ԭ�ַ���������\0�滻�ָ�ı�־λ
	//char ch[] = "www.baidu.com";
	//www\0baidu.com ��һ�ν�ȡ
	//www\0baidu\0com �ڶ��ν�ȡ
	//ww\0baidu\0com\0 �����ν�ȡ

	/*char* p = strtok(ch, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);*/

	/*char ch1[] = "2134652266@qq.com";
	char str[100];
	strcpy(str, ch1);
	char* p = strtok(str, "@");//2134652266
	printf("%s\n",p);
	p = strtok(NULL, ".");//qq
	printf("%s\n", p);*/

	//char ch2[]="dhsd\ndanks\ndjjd\nddjdjd\nfnkj\njfjfk";
	char ch2[] = "���ɶ\n����զ��\n�ٳ�һ����ʵ\n���Ծ�����\n������\n�����";
	char str2[100];
	//����
	strcpy(str2, ch2);
	//��ʼ�ָ�ָ��־Ϊ\n
	char*p1=strtok(str2,"\n");
	//printf("%s\n", p1);
	//ѭ���ָ�
	while (p1)
	{
		printf("%s\n", p1);
		p1 = strtok(NULL, "\n");//���ηָ�
	}
	return 0;
}


//�ַ�������ת��
int main40()
{
	//atoi���ַ�������תΪ����
	//atoi�������ո�����ֻ������ſ�ʼת�������������ֻ��ַ���\0ֹͣת��
	char ch[] = "   -123-45678abcdf123";//-123
	int p = atoi(ch);
	printf("%d\n", p);
	//atof���ַ�������תΪ������
	char ch1[] = "   -123.45678abcdf123";
	double a = atof(ch1);//-123.46
	printf("%.2f\n", a);
	//atol���ַ���ת��Ϊlong������
	char ch2[] = "   -123.4.5678abcdf123";
	long b = atof(ch2);//-123
	printf("%ld\n", b);

	return 0;
}