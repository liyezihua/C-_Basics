#include<stdio.h>

void strcat(char* ch, char* ch1)//�����ַ���  ����
{
	int i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}

	int j = 0;
	while (ch1[j] != '\0')
	{
		ch[i + j] = ch1[j];
		j++;
	}
	ch[i + j] = 0;
}

void strcat1(char* ch, char* ch1)//�����ַ���  ָ��
{
	int i = 0;
	while (*(ch + i) != '\0')
	{
		i++;
	}
	int j = 0;
	while (*(ch + j) != '\0')
	{
		*(ch + i + j) = *(ch1 + j);
		j++;
	}
	*(ch + i + j) = 0;
}

void strcat2(char* ch, char* ch1)//��1
{
	while (*ch)ch++;
	while (*ch)
	{
		*ch = *ch1;
		*ch++;
		*ch1++;
	}
}

void strcat3(char* ch, char* ch1)//��2
{
	while (*ch)ch++;
	while (*ch++ = *ch1++);
}

int main21()
{
	char ch[100] = { "hello" };
	char ch1[] = { "world" };
	strcat3(ch, ch1);
	printf("%s", ch);
	return 0;
}


void remove(char* ch)//�ַ���ȥ���ո�
{
	char str1[100] = { 0 };
	char* temp = str1;
	int i = 0;
	int j = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] != ' ')
		{
			str1[j] = ch[i];
			j++;
		}
		i++;
	}
	while (*ch++ = *temp++);
}

void remove1(char* ch)//�ַ���ȥ���ո�
{
	char* Atemp= ch;
	//��¼�ǿո��ַ���
	char* Btemp= ch;
	while(Atemp)
	{
		if (*Atemp !=' ')
		{
			*Btemp = *Atemp;
			Btemp++;
		}
		Atemp++;
	}
	*Btemp = 0;
}

int main22()
{
	char ch[] = "v   h   e   l   l   o   w  r  o  l  d";
	remove(ch);
	printf("%s", ch);
	return 0;
}

//ָ����Ϊ��������ֵ  ���ҵ����ַ�
char* strchr1(char* str, char ch)//���鷽ʽ
{
	int i = 0;
	while (str[i])
	{
		if (str[i] = ch)
		{
			return &str[i];
		}
		str[i]++;
	}
	return NULL;
}

char* strchr2(char* str, char ch)//ָ�뷽ʽ
{
	while (*str)
	{
		if (*str == ch)
		{
			return str;
		}
		str++;
	}
	return NULL;
}

int main23()
{
	char str[] = "iillohello world";
	char* p = strchr2(str, 'd');
	if (p == NULL)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}