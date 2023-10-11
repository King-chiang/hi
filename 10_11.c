#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//分而治之

//给定一个数字数组，将数字相加，返回结果

//使用循环：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("其和为：%d\n", sum);
//	return 0;
//}

//使用递归
//int Sum(int arr[], int sz)
//{
//	if (sz == 1)
//		return *arr;
//	else
//	{
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	Sum(arr, sz);
//	return 0;
//}
//不会写，俩原因：一是知道有可能是空数组，但不会表达空数组；二是由于数组传上去的是首元素的地址，所以在后续多次调用函数时，元素加sum不知如何表达了


//桶排序
//int main()
//{
//	int arr[11] = { 0 };
//	int i, j,t;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (j = 0; j <= 10; j++)
//	{
//		for (i = 0; i < arr[j]; i++)
//		{
//				printf("%d  ", j);
//		}
//	}
//	return 0;
//}
//虽说是看了一遍再写的，但真的完全不记得，写完之后甚至心想我和他写的不一样呢


//输入10个0-1000之间的数，从大到小排序
//int main()
//{
//	int arr[1001] = { 0 };
//	int t;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (int i = 0; i <= 1000; i++)
//	{
//		for (int j = 0; j < arr[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//但这并不是真正的桶排序，真正的桶排序要更复杂


//冒泡排序
//int main()
//{
//	int arr[] = { 8, 100, 50, 22, 15, 6, 1, 1000, 999, 0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int j = 0; j < sz; j++)
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//嘿嘿嘿一模一样，happy~~~

//后边有一个分数排序后输出人名，由于结构体我还没学，所以...But，俺明天就学！


//快速排序
int main()
{
	int arr[] = { 2,8,5,0,7 };
	int i = 0;
	int j = 0;
	int t = 0;
	int sz = sizeof(arr) / sizeof(arr[1]);
	for (t = 0; t < sz / 2; t++)
	{
		for (i = 0, j = sz - 1; i < j; i++, j--)
		{
			if (arr[j]<arr[0] && arr[i]>arr[0])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		if (i == j)
		{
			int tmp = arr[0];
			arr[0] = arr[i];
			arr[i] = tmp;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}