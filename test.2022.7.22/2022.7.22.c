#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void add(int *x)
//{
//	(*x)++;
//
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//		printf("%d ", num);
//
//		add(&num);
//		printf("%d ", num);
//
//		add(&num);
//		printf("%d ", num);
//
//	return 0;
//}

//		�ں����ڲ��ı亯���ⲿ��ʱ�� Ҫ����ַ


//			������Ƕ�׵��ú���ʽ����
//		1 ÿһ������Ҫ�ں�������������� ����Ƕ�׶���

//void go()
//{
//	printf("heihei\n");
//}
//
//void come()
//{
//	go();
//	printf("haha\n");
//}
//
//int main()
//{
//	come();
//	printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 4321)));
//	return 0;
//}
//printf ���ص��Ǵ�ӡ����Ļ���ַ��ĸ���

//int add(int *x, int *y)
//{
//	
//	int s =(*x) + (*y);
//
//	return s;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = add(&a, &b);
//	printf("%d\n ", c);
//
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{ 
//	int a = 12;
//	int b = 28;
//	int c = add(a,b);
//	printf("%d\n", c);
//	return 0;
//}
//			�������


//int main()
//{
//	int a = 39;
//	int b = 11;
//
//	//�������� - �ȸ�֪
//	//�����޹ؽ�Ҫ	��������Ҫ
//	//һ����ں���ʹ��ǰ		Ҫ��������������
//	//һ�����ͷ�ļ���
//	int add(int, int);  //������ӻᾯ��
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�������� - ����
//int add(int x, int y)
//{
//	return x + y;
//}


#include"add.h"

int main()
{
	int a = 21;
	int b = 29;
	int c = add(a, b);
	printf("%d", c);

	return 0;
}