#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//今天看了一些算法

//1.二分查找，书上是用Python的，所以只传了数组和要查找的数，但C好像还得传sz
//int binary_search(int arr[],int  k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int a=binary_search(arr, k, sz);
//	if (a == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为：%d\n", a);
//	return 0;
//}
//不错，写的挺顺，已经基本掌握了


//2.选择排序
//目前本人还不会，回头再说吧，拜拜