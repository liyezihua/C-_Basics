#include<stdio.h>
#include<string.h>
#include<time.h>;
#include<stdlib.h>
//��ȡ�ļ�״̬ͷ�ļ�
#include<sys/types.h>
#include<sys/stat.h>


#define SIZE 1024
//���ļ�����

//���������ļ����� ͨ��cmd���д���ʵ��
//gcc - o D : \copy.exe C : \Users\Administrator\Source\Repos\��ϰ\�ļ�����3.cpp
// ͨ�������Ŀ����ļ����򣬽��п���
// D:\main.exeΪԴ�ļ���D:\code\main.exeΪ��������ļ�
//D:\copy.exe D : \main.txt D : \code\main.txt
int main76(int argc, char* argv[])
{
	/*for (int i = 0;i < argc;i++)
	{
		printf("%s\n", argv[i]);
	}*/

	if (argc < 3)
	{
		printf("��������");
		return -1;
	}
	//argv�������� �ļ���С��50M
	FILE* fp1 = fopen(argv[1], "rb");
	FILE* fp2 = fopen(argv[2], "wb");

	if (!fp1 || !fp2)
	{
		printf("�����ļ�����");
		return -2;
	}

	
	char* temp = NULL;
	int size = 0;
	struct stat st;
	stat(argv[1], &st);
	//�����ļ�ʵ�ʴ�С���ٿռ�
	if (st.st_size > size)
	{
		temp= (char*)malloc(sizeof(char) * SIZE);
		size=SIZE;
	}
	else
	{
		temp = (char*)malloc(sizeof(char) * st.st_size+10);
		size = st.st_size+10;
	}
	
	int count = 0;
	while (!feof(fp1))
	{
		memset(temp, 0, size);
		//��ȡ�ɹ���ʵ�ʸ���
	    count =	fread(temp, sizeof(char), size, fp1);
		fwrite(temp, sizeof(char), size, fp2);
	}

	free(temp);
	fclose(fp1);
	fclose(fp2);

	return 0;
}

//��ȡ�ļ�״̬
int main77()
{
	struct stat st;
	stat("D:\copy.exe", &st);

	printf("�ļ���С��%d\n", st.st_size);
	system("pause");

	return 0;
}

//�ļ������д
int main78()
{
	FILE* fp1 = fopen("D:/a.txt", "r");
	if (!fp1)
		return -1;

	char arr[100];
	memset(arr, 0, 100);
	fgets(arr, 100, fp1);
	printf("%s", arr);

	//�ļ������д
	//fseek(fp1, -8, SEEK_CUR);

	//�������ļ���ʼλ�ÿ�ʼƫ�ƣ�������ĩβ
	fseek(fp1, 7, 0);
	memset(arr, 0, 100);
	fgets(arr, 100, fp1);
	printf("%s", arr);

	return 0;
}

int main79()
{
	//a׷��
	FILE* fp1 = fopen("D:/a.txt", "r+");
	if (!fp1)
		return -1;
	long pos = ftell(fp1);

	printf("%ld\n", pos);
		//fseek(fp1, 17, SEEK_CUR);
	fseek(fp1, -30, SEEK_END);

		pos = ftell(fp1);
		printf("%ld\n", fp1);
		fputs("������զ��",fp1);

		fclose(fp1);
	return 0;
}

int main80()
{
	FILE* fp1 = fopen("D:/main.txt", "r");
	if (!fp1)
		return -1;
	char arr[100];
	//��ȡ�ļ������������λ��
	long pos = ftell(fp1);
	printf("%ld\n", pos);
	fgets(arr, 100, fp1);
	fseek(fp1, 6, SEEK_CUR);
	pos = ftell(fp1);
	printf("%ld\n", pos);

	//�����ļ��������ʼλ��
	rewind(fp1);//fseek(fp1,0,SEEK_SET)
	memset(arr, 0, 100);
	fgets(arr, 100, fp1);
	printf("%s\n", arr);
	return 0;
}

//ɾ���ļ����������ļ�
int main81()
{
	//ɾ��
	int val= remove("D:\sss.txt");
	if (val == 0)
		printf("ɾ���ɹ�");
	else
		printf("ɾ��ʧ��");
	//������
	int val1 = rename("D:\ss.txt","D:ddd.txt");
	//�ƶ��ļ�
	//int val1 = rename("D:\ss.txt", "D:\ddd\ddd.txt");

	if (val1 == 0)
		printf("�ɹ�");
	else
		printf("ʧ��");

		return 0;
}


//����������
int main82()
{
	FILE* fp1 = fopen("D:/main.txt", "w");
	if (!fp1)
		return -1;
	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
			break;
		//����������
		//ȱ�㣺������Ӳ�̽���������Ӳ��.  �ŵ㣺��ʱ���£���Ҫ�ļ�ʱʹ�ã�
		fflush(fp1);//���ļ��������Ķ�������д�뵽�ļ���
		fputc(ch, fp1);
	}
	fclose(fp1);
	return 0;
}