#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//�ļ��Ĵ򿪺͹ر�
int main59()
{
	//fopen���ļ�
	FILE* fp = fopen("D:\main.txt", "r");

	//1���Ҳ����ļ�
	//2���ļ�Ȩ�ޣ�����д��ִ�У�
	//3��������ļ��������� 65535
	if (fp == NULL)
	{
		printf("���ļ�ʧ��");
		return -1;
	}
	printf("�ļ��򿪳ɹ�%p\n", fp);



	//�ļ����ַ���ȡ �ļ�Ĭ�Ͻ�βΪ-1
	char ch;
	ch = fgetc(fp);
	printf("%c\n", ch);
	//�����޸��ļ���ָ�� �ļ��ڶ�ȡʱ��������Զ������ƶ�
	//fp++;
	//EOFΪ-1���һλ
	while (ch != EOF)
	{
		ch = fgetc(fp);
		printf("%c\n", ch);
	}

	//�ر��ļ�
	fclose(fp);
	return 0;
}

//�ļ���д��
int main60()
{
	//д�ļ� �ļ������ڻᴴ���µ��ļ������ڻ����֮ǰ���ļ�
	FILE* fp1 = fopen("D:\main.txt", "w");
	if (!fp1)
		return -1;
	//д�ļ�
	char c = 'a';
	fputc(c, fp1);

	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
			break;
		fputc(ch, fp1);
	}

	//�ر��ļ�
	fclose(fp1);
	return 0;
}

//�ļ�����
int main61()
{
	FILE* fp1 = fopen("D:\jiemi.txt", "r");
	FILE* fp2 = fopen("D:\jiami.txt", "w");
	if (!fp1 || !fp2)
		return -1;
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//����
		ch++;
		fputc(ch, fp2);
	}

	//�ر��ļ�
	fclose(fp1);
	fclose(fp2);

	return 0;
}


//�ļ�����
int main62()
{
	FILE* fp1 = fopen("D:\jiam.txt", "r");
	FILE* fp2 = fopen("D:\jiem.txt", "w");

	if (!fp1 || !fp2)
		return -1;
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//����
		ch--;
		fputc(ch, fp2);
	}

	//�ر��ļ�
	fclose(fp1);
	fclose(fp2);

	return 0;
}

//�ļ��ж�
int main63()
{
	FILE* fp1 = fopen("D:\ds.txt", "r");
	if (!fp1)
		return -1;

	char* p = (char*)malloc(sizeof(char) * 100);
	if (p == NULL)
		return -2;
	//memset(p, 0, 100);
	//fgets(p, 100, fp1);

	//feof�ж��ļ��Ƿ��β �����ж��ı��ļ����Ҷ�����
	//������ļ���β���ط�0��û���ļ���βΪ0
	while (!feof(fp1))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp1);
		printf("%s\n", p);

	}
	//printf("%s\n", *p);

	free(p);
	fclose(fp1);
	return 0;
}

//�ļ���д
int main64()
{
	FILE* fp1 = fopen("D:\ds.txt", "r");
	if (!fp1)
		return -1;

	char* p = (char*)malloc(sizeof(char) * 1024);

	while (1)
	{
		memset(p, 0, 1024);
		scanf("%[^\n]", p);
		//�̵��س�
		getchar();
		//ֹͣ��������
		if (!strcmp(p, "com"))
			break;
		//׷��\n
		strcat(p, "\n");
		fputs(p, fp1);
	}
	free(p);
	fclose(fp1);
	return 0;
}
