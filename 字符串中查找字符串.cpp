#include<stdio.h>

char* strctr(char* str, char* dest)
{
	char* fstr = str;//����ԭ�ַ�ָ��
	char* rstr = str;//��¼��ͬ�ַ����׵�ַ
	char* fdest = dest;
	while (*fstr)
	{
		rstr = fstr;
		while (*fstr=*fdest)
		{
			if (*fstr != '\0')
			{
				fstr++;
				fdest++;
			}
		}
		if (*fdest == '\0')
		{
			return rstr;
		}
		//�ع�
		fdest = dest;//Ŀ���ַ������µ��ع�λ��
		fstr = str;
		fstr++;
	}
}
//char* strctr1(char* dest, char* src)
//{
//	if (*src == '\0')//���srcֱ��Ϊ�գ��Ǿͷ���dest
//		return dest;
//	char* s1 = NULL;//����dest�ַ���
//	char* s2 = NULL;//����src�ַ���
//	char* sign = dest;//��¼dest
//	while (*sign)
//	{
//		s1 = sign;//ÿ�ض���sign����s1
//		s2 = src;//�����һ�����ַ���ͬ�������岻��ͬ���Ǵ�ʱ����ѭ������src�ع�
//		while (*s1 == *s2 && *s1 && *s2)//��������ַ������˶���ͬ���Ǿ�����ѭ��
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return sign;//
//		sign++;
//	}
//	return NULL;//ѭ�������˻�û���Ǿ����Ҳ�����
//}
int main24()
{
	char str[] = "hello world";
	char dest[] = "llo\0";

	char* p = strctr(str, dest);

	printf("%s", p);

	return 0;
}
