#include<stdio.h>

//������
union yar
{
	int a;
	float b;
	double c;
	char d;
	short e[6];//12
};

int main57()
{
	union yar var;
	var.a = 100;
	printf("%d\n", var.a);
	//�������ڴ��ַһ��
	printf("%p\n", &var.a);
	printf("%p\n", &var.b);
	printf("%p\n", &var.c);
	return 0;
}

//ö��
enum Color
{
	red, blue, green, pink, yellow, black, white
}color;

enum renwu
{
	yidong, gongji, beigongji, beibingdong, shoushang, taopao, shiqu, shiwang
};

int main58()
{
	int val;

	/*switch (val)
	{
	case red:
		printf("��ɫ\n");
		break;
	case blue:
		printf("��ɫ\n");
		break;
	case green:
		printf("��ɫ\n");
		break;
	case pink:
		printf("��ɫ\n");
		break;
	case yellow:
		printf("��ɫ\n");
		break;
	case black:
		printf("��ɫ\n");
		break;
	case white:
		printf("��ɫ\n");
		break;
	default:
		break;
	}*/

	while (1)
	{
		scanf("%d", &val);
		switch (val)
		{
		case yidong:
			printf("������ǰ�ƶ�\n");
			break;
		case gongji:
			printf("���𹥻�\n");
			break;
		case beigongji:
			printf("�����������ܵ��˵Ĺ���\n");
			break;
		case beibingdong:
			printf("���ﱻ�����޷��ж�\n");
			break;
		case shoushang:
			printf("�������ˣ��޷��ж�\n");
			break;
		case taopao:
			printf("����ɹ�������\n");
			break;
		case shiqu:
			printf("��������ʰȡ���ϵ���Ʒ\n");
			break;
		case shiwang:
			printf("����������");
			return 0;
			break;
		}
	}
	return 0;
}

//Ϊ�Ѵ��ڵ�����ȡ����
struct stdon
{

};

typedef struct stdon ss;