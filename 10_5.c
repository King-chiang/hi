#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//冒泡排序
//听后写的,建议再听一遍，再写一遍

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d  ", arr[i]);
//	return 0;
//}

//优化
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//      int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//	if (flag == 1)
//		break;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d  ", arr[i]);
//	return 0;
//}

//最后有个三子棋和扫雷的游戏，回头再来学吧

//leetcode


//操作符

//面试题：不能创建临时变量，实现两个数交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}

//但是会出现溢出，当a,b都比较大时，a+b就有可能溢出，so...

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//求一个整数储存在内存中的二进制中1的个数
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//但是当a为负数时不行，so...
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a>>i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//360笔试题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i=a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//访问一个结构的成员
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};//创建一个结构体类型：struct Stu
//int main()
//{
//	struct Stu s1 = { "张三",20,"202311000407" };//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}


//以下是刷题

//1.给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回它们的数组下标。
//  你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。你可以按任意顺序返回答案
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int target = 7;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; arr[i] <= (target/2); i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] + arr[j] == target && i != j)
//				printf("%d %d\n", i, j);
//		}
//	}
//	return 0;
//}