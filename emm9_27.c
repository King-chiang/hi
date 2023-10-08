#define _CRT_SECURE_NO_WARNINGS 1

//马上要放假啦！！！！！！

//学习库函数：www.cplusplus.com   MSDN   http://en.cppreference.com(good)


//搞一下好久之前的作业

//求两个数的较大值
#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}



//写一个函数求两个数的较大值
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = MAX(a, b);
//	printf("其较大值为：%d", max);
//	return 0;
//}


//输出乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1, j = 1; j <= 9; j++)
//		printf("%s\n",i*j==k);
//}
//emm大傻der根本不会



//在一个整形有序数组中查找具体的某个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k,mid;
//	scanf("%d", &k);
//	int lenth = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = lenth - 1;
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k == arr[mid])
//		{
//			printf("找到了，其下标为：%d\n", mid);
//			break;
//		}
//		else
//			right = mid - 1;
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}