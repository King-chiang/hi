#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//以下是9.30重做的

//1.给定两数，求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n != 0)
//	{
//		a = m % n;
//		m = n;
//		n = a;
//	}
//	printf("其最大公约数为：%d\n", n);
//	return 0;
//}


//2.打印100-200的素数
//int main()
//{
//	int a, b;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (b == a)
//			printf("%d  ", a);
//	}
//	return 0;
//}


//3.从1-100所有整数中出现多少个数字9
//int main()
//{
//	int a = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			a++;
//		if (i / 10 == 9)
//			a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//4.计算1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = flag * (1.0 / i) + sum;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//这里是%lf，不是%d
//	return 0;
//}


//5.求十个数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}


//6.输出9*9乘法表
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}


//然后那一期后边又讲了goto函数，回头看猜数字游戏的时候再往后看看吧


//函数的练习

//1.写一个函数可以判断一个数是不是素数
//void SS(x)
//{
//	int y = 2;
//	for (y = 2; y < x; y++)
//	{
//		if (x % y == 0)
//			break;
//	}
//	if (x == y)
//		printf("这是一个素数");
//	else
//		printf("这不是一个素数");//尽量不要在函数内打印
//}
//int main()
//{
//	printf("请输入一个数：");
//	int a = 0;
//	scanf("%d", &a);
//	SS(a);
//	return 0;
//}
//自己拿数试是可以的，但老师不是这样写的
//打印100-200间的素数
//int is_prime(int n)
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n",i);
//	}
//}


//2.写一个函数判断一年是否为闰年
//还是之前的打印1000-2000之间的闰年
//int is_leap_year(a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d  ", year);
//	}
//	return 0;
//}


//重写！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//3.写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[],int a,int sz)//不要只写arr和a
//{            //本质上arr是指针  所以把sz传过来
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//			right = mid - 1;
//		else if (arr[mid] < a)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int mid=0;
//	             //传过去的是首元素的地址
//	int ret = binary_search(arr, k,sz);//可以传两个参数,这样接受mid,而不是printf("%d",mid)
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，%d\n", ret);
//	return 0;
//}
//呜呜呜，俺不会，终于，经过一次又一次的修改终于OK了（得意）


//重新看！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//4.写一个函数，每调用一次该函数num就+1
//根本不理解它什么意思
//ADD(int* p)
//{
//	(*p)++;//一定要有（），因为++的优先级高些
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}