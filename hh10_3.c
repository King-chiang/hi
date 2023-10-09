#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//函数的递归


//1.接受一个整型值（无符号），按顺序打印它的每一位，例：输入1234，输出：1    2    3    4
//重写！先听后写的！
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//2.编写函数不允许创建临时变量，求字符串的长度
//重写！先听后写的！
//先不管第一句(几乎等于是直接copy的）不会啊，一涉及指针就懵了
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//这题正解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//3.求n的阶乘
//之前写过的，再来一遍吧
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		ret = i * ret;
//	printf("%d\n", ret);
//	return 0;
//}

//用函数
//int Fac1(int i)
//{
//	int ret = 1;
//	for (int j = 1; j <= i; j++)
//		ret = ret * j;
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	int a=Fac1(n);
//	printf("%d\n", a);
//	return 0;
//}

//这个重写，因为是先听后写的！
//用递归
//int Fac(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*Fac(i - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	int a=Fac(n);
//	printf("%d\n", a);
//	return 0;
//}


//4.求第n个斐波那契数
//斐波那契数列：1 1 2 3 5 8 13 21 34.........
//int Fib(int i)
//{
//	if (i <= 2)
//		return 1;
//	else
//		return Fib(i - 1) + Fib(i - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}
//good job!

//由于效率太慢，所以用递归迭代
//重写！俺不会！点提后写下了这些
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = a + b;
//	int count = 3;
//	if (i == 1 && i == 2)
//		return 1;
//	else if (i == 3)
//		return 2;
//	else
//	{
//		while (count != i)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//			count++;
//		}
//		return c;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}

//鹏哥的
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}


//自主研究  递归经典案例：1.汉诺塔问题     2.青蛙跳台阶问题


//以下是昨日要重写的

//1.写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int k = 7;
//	int a = binary_search(arr, k,sz);
//	if (a == -1)
//		printf("找不到\n");
//	else
//		printf("%d\n", a);
//	return 0;
//}


//2.写一个函数，每调用一次该函数num就+1
//int ADD(int x, int y)
//{
//	int num = 0;
//	int sum = x + y;
//	num++;
//	return num;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	i=ADD(a, b);
//	printf("%d\n", i);
//	scanf("%d%d", &a, &b);
//	i = ADD(a, b);
//	printf("%d\n", i);
//	scanf("%d%d", &a, &b);
//	i = ADD(a, b);
//	printf("%d\n", i);
//}

//OK,本人不会，现在连看都看不懂了，妈耶

//唉，本想把正确的copy过来凑个300行，但不够，呜呜呜，算了，我要开摆了，拜拜，明天见

//hh,苗苗出去了，so来卷一下（奸笑）

//数组

//听了点点，没啥好写的