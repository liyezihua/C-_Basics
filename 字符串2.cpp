#include<stdio.h>
#include<stdlib.h>
#include<string>

//�ַ�������
void strcopy(char* dest, char* src)
{
	/*while (*dest = *src)
	{
		*dest++;
		*src++;
	}*/
	while (*dest++ = *src++);
}
void strncopy(char* dest, char* src, size_t num)
{
	/*for (int i = 0;i < num;i++)
	{
		*dest = *src;
		*dest++;
		*src++;
	}*/
	while ((*dest++ = *src++) && --num);
}
int main34()
{
	char ch[] = "hello world";
	char ch1[100] = { 0 };
	//�ַ�������
	//strcpy(ch1, ch);//ϵͳ�Դ�����
	//strcopy(ch1, ch);
	//�ַ������޿���
	//strncpy(ch1,ch,50);//ϵͳ�Դ�����
	strncopy(ch1, ch, 5);
	printf("%s\n", ch1);
	return 0;
}


//�ַ���ƴ��׷��
void strcoat(char* dest, char* src)
{

	//�ҵ�dest�ַ�����\0��λ��
	while (*dest)dest++;
	//����
	while (*dest++ = *src++);
}
void strncoat(char* dest, char* src, size_t n)
{

	//�ҵ�dest�ַ�����\0��λ��
	while (*dest)dest++;
	//����
	while ((*dest++ = *src++) && --n);
}
int main35()
{
	char ch[100] = "hello";
	char ch1[10] = "world";
	//�ַ���׷��
	//strcat(ch, ch1);//ϵͳ����ʵ��
	//strcoat(ch, ch1);
	//�ַ�������׷��
	//strncat(ch, ch1, 3);
	//strncoat(ch, ch1,4);
	printf("%s\n", ch);
	return 0;
}


//�ַ����Ƚ�
int strcmp1(char* ch, char* ch1)
{
	while (*ch == *ch1)//�ַ������
	{
		if (*ch == '\0')//ȥ���ո�
			return 0;
		ch++;
		ch1++;
	}
	//�ַ��������
	return *ch > *ch1 ? 1 : -1;
}

int strncmp1(char* ch, char* ch1, size_t n)
{
	for (int i = 0;i < n && ch[i] && ch1[i];i++)
	{
		if (ch[i] != ch1[i])//�����
			return ch[i] > ch1[i] ? 1 : -1;
	}
	//���
	return 0;
}

int main36()
{
	char ch[] = "helro";
	char ch1[] = "hello";
	int val = 0;
	//�ַ����Ƚ�
	//val = strcmp(ch, ch1);//ϵͳ����ʵ��
	//val = strcmp1(ch, ch1);
	//�ַ������ޱȽ�
	//val = strncmp(ch, ch1, 3);//ϵͳ����ʵ��
	val = strncmp1(ch, ch1, 5);
	if (val == 0)
		printf("���");
	else
		printf("�����");
	//printf("%d\n",val);

	return 0;
}


int main37()
{
	//sprinf�ַ�����ʽ�������printf�����������
	//��ͬ��sprintf��������ַ�����,printf�������������
	char ch[100];
	//sprintf(ch, "hello world");
	//sprintf(ch, "%d+%d=%d", 1, 2, 3);
	//sprintf(ch, "%0.2d+%0.2d=%0.2d", 1, 2, 3);
	//sprintf(ch, "%x+%o=%d", 0xff, 23, 18);


	//sscanf�ַ�����ʽ��������scanf���뺯������
	//��ͬ��scanf��sscanf���Թ̶��ַ���Ϊ����Դ��scanf���Լ�����Ϊ����Դ
	char ch2[] = "hello world";
	char str1[100];
	char str2[100];
	//sscanf(ch2, "%[^\n]", str1);
	sscanf(ch2, "%5s%s", str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);

	//char ch1[] = "0xff+27=18";
	//int a, b, c;
	//sscanf(ch1, "%x+%o=%d",&a,&b,&c);
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	return 0;
}