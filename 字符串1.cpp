#include<stdio.h>
#include<string>

//ͳ���ַ������ִ���
char* strctr1(char* dest, char* src)
{
	if (*src == '\0')//���srcֱ��Ϊ�գ��Ǿͷ���dest
		return dest;
	char* s1 = NULL;//����dest�ַ���
	char* s2 = NULL;//����src�ַ���
	char* sign = dest;//��¼dest
	while (*sign)
	{
		s1 = sign;//ÿ�ض���sign����s1
		s2 = src;//�����һ�����ַ���ͬ�������岻��ͬ���Ǵ�ʱ����ѭ������src�ع�
		while (*s1 == *s2 && *s1 && *s2)//��������ַ������˶���ͬ���Ǿ�����ѭ��
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return sign;//
		sign++;
	}
	return NULL;//ѭ�������˻�û���Ǿ����Ҳ�����
}

int main29()
{
	//char* str;
	char ch[] = "47267846824hhh93472394hhhajdajhhh9479237hhh";
	//str = ch;
	char ch1[] = "hhh";
	char* p = strctr1(ch, ch1);
	int count = 0;
	while (p)
	{
		p += strlen(ch1);
		p = strctr1(p, ch1);
		count++;
	}
	//printf("%s\n", p);
	printf("���ַ����г����ˣ�%d", count);
	return 0;
}

//ͳ���ַ���ȥ���ո���ַ����ĸ���
int getcount(char* ch)//����ʵ��
{
	int count = 0;
	int i = 0;
	while (ch)
	{
		if (ch[i] != ' ')
		{
			count++;
		}
		i++;
		if (i > strlen(ch))
			return  count;
	}
}
int getcount1(char* ch)//ָ��ʵ��
{
	int count = 0;
	while (*ch)
	{
		if (*ch != ' ')
			count++;
		ch++;
	}
	return count;
}
int main30()
{
	char ch[] = "   hell o world  ";

	int len = getcount1(ch);

	printf("%d", len);

	return 0;
}


//ͳ�Ƶ����ַ����ִ���
int main31()
{
	//ͳ���ַ������ֵĴ���
	char ch[] = "aucsiochosvjoaidhviaosdhfuasdifdhuivbasduivh";//97 97+26
	//�洢�ַ������ֵĴ���
	int arr[26] = { 0 };
	for (int i = 0;i < strlen(ch); i++)
	{
		arr[ch[i] - 'a']++;
	}

	for (int i = 0;i < 26;i++)
	{
		if (arr[i] != 0)
			printf("��ĸ��%c ���ִ�����%d\n", i + 'a', arr[i]);
	}
	return 0;
}

//�ַ�������
void inves(char* ch)//����ʵ��
{
	int i = 0;//��ͷ��ʼ
	int j = strlen(ch) - 1;//��β��ʼ
	while (i < j)
	{
		char temp = ch[i];
		ch[i] = ch[j];
		temp = ch[j];
		i++;
		j--;
	}
	return;
}
void inves1(char* ch)//ָ��ʵ��
{
	char* ftemp = ch;
	char* rtemp = ch + strlen(ch) - 1;
	while (ftemp < rtemp)
	{
		char temp = *ftemp;
		*ftemp = *rtemp;
		*rtemp = temp;
		ftemp++;
		rtemp--;
	}
	return;
}

int main32()
{
	char ch[] = "hello wold";
	inves1(ch);
	printf("%s\n", ch);

	return 0;
}

//�ж��Ƿ��ǻ����ַ���
int sytem(char* ch)
{
	char* ftemp = ch;
	char* rtemp = ch + strlen(ch) - 1;
	while (ftemp < rtemp)
	{
		if (*ftemp != *rtemp)
			return 1;
		ftemp++;
		rtemp--;
	}
	return 0;
}

int main33()
{
	char ch[] = "heojkjoehd";

	int val = sytem(ch);
	if (!val)
		printf("��ͬ");
	else
		printf("����ͬ");
	return 0;
}