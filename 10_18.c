#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1.输出结果是啥 
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
//妈耶一系列原码补码... 


//2.输出结果
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//有点小思路但结果不对


//3.就是2.中的-128变成了128，结果是一样的，因为128=127+1，在表中127+1=-128


//4.
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//就是补码加补码


//5.
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//俺也觉得死循环


//6.
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//		a[i] = -1 - i;
//	printf("%d", strlen(a));
//	return 0;
//}
//我的天呐


//7.
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//=>少用unsigned


//Ok 接下来就回顾一下算法啦

//1.桶排序   5 3 5 2 8
//int main()
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < arr[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//开头输入数字的地方瞅了一眼前边的

//冒泡排序    8 100 50 22 15 6 1 1000 999 0
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	printf("请输入十个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &t);
//		arr[i] = t;
//	}
//	//int sz = sizeof(arr) / sizeof(arr[1]);
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//事情是这样的，先写了一遍，但不对，于是瞅了一眼，发现少了sz，然后又搞了会之前写的，找到了问题所在，就是几趟和几个数没弄清楚


//现在要来打印人名   ：huhu 5 分、haha 3 分、xixi 5 分、hengheng 2 分和 gaoshou 8 分
//typedef struct stu
//{
//	char name[20];
//	int result[10];
//}stu;
//
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	stu s1 = { "huhu",5 };
//	stu s2 = { "haha",3 };
//	stu s3 = { "xixi",5 };
//	stu s4 = { "hengheng",2 };
//	stu s5 = { "gaoshou",8 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[i] = t;
//	}
//	return 0;
//}
//结构体还是不会


//快速排序    6 1 2 7 9 3 4 5 10 8
//int main()
//{
//	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i, j,tmp;
//	
//	while (i <= j)
//	{
//		if (arr[j] > arr[0])
//			j--;
//		if (arr[i] < arr[0])
//			i++;
//		else
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//
//	}
//	return 0;
//}
//唉，怎么写都不对

//就先这样了吧，有点学不进去了