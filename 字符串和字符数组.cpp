#include <stdio.h>
#include<string.h>
int main5()
{
	char arr1[] = { 'h','e','l','l','o' };//�ַ�����
	char arr[] = { "hel\0lo" };//�ַ��� �ַ���Ĭ�Ͻ�β\0��Ϊ������
	printf("%s\n", arr);

	//�����ַ�����洢�ַ���
	/*int arr2[10];
	scanf("%s", arr2);
	printf("%s\n", arr2);*/


	//�ַ���ƴ��
	/*char ch[] = {"hello"};
	char ch1[] = { "world" };
	char ch2[22];

	int i = 0, j = 0;
	while (ch[i]!='\0')
	{
		ch2[i] = ch[i];
		i++;
	}
	while (ch1[j]!='\0')
	{
		ch2[i + j] = ch1[j];
		j++;
	}
	ch2[i + j] = '\0';
	printf("%s", ch2);*/


	//�ַ�����ȡ�ʹ�ӡ
	char ar[100];

	//gets�����ַ������Դ��ո�
	//gets_s(ar, 20);

	//fgets�����ַ������Դ��ո�,��ȡ�ַ�������Ԫ�ظ������Զ����\n ���ڻ������û��
	fgets(ar, sizeof(ar), stdin);

	//ͨ��������ʽscanfҲ���Խ��տո�
	//scanf("%[^\n]", ar);

	//printf("%s", ar);
	//puts(ar);//puts�Դ�����
	fputs(ar, stdout);//fputs��������

	//�����ַ�������
	char ch[] = "hello world";
	printf("�����С��%d ", sizeof(ch));
	printf("�ַ��������ǣ�%d ", strlen(ch));

	/*int sum = 0;
	while (ch[sum]!='\0')
	{
		sum++;
	}
	printf("%d", sum);
	return 0;*/
	return 0;
}