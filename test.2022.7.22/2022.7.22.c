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

//		在函数内部改变函数外部的时候 要传地址


//			函数的嵌套调用和链式访问
//		1 每一函数都要在函数外面独立存在 不能嵌套定义

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
//printf 返回的是打印在屏幕上字符的个数

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
//			正常情况


//int main()
//{
//	int a = 39;
//	int b = 11;
//
//	//函数声明 - 先告知
//	//声明无关紧要	定义最重要
//	//一般放在函数使用前		要满足先声明后定义
//	//一般放在头文件中
//	int add(int, int);  //如果不加会警告
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数定义 - 创造
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