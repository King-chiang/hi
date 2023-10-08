#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//好久以前的作业

//1.将三个数从大到小的输出
//int main()
//{
//	int a, b, c;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if(a>b>c)
//		printf("其顺序为：%d %d %d\n", a, b, c);
//	else if (a > c > b)
//		printf("其顺序为：%d %d %d\n", a, c, b);
//	else if (b> a > c)
//		printf("其顺序为：%d %d %d\n", b, a, c);
//	else if (b> c> a)
//		printf("其顺序为：%d %d %d\n", b, c, a);
//	else if (c> a > b)
//		printf("其顺序为：%d %d %d\n", c, a, b);
//	else
//		printf("其顺序为：%d %d %d\n", c, b, a);
//	return 0;
//}


//2.打印1-100中所有3的倍数
//int main()
//{
//	int a=0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//	}
//	return 0;
//}


//记得要重做！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//3.给定两数，求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a % b == 0)
//		printf("其最大公约数为：%d\n", a);
//	else if (b % a == 0)
//		printf("其最大公约数为：%d\n", b);
//	else
//	{
//		c = a * b;
//		printf("其最大公约数为：%d\n", c);
//	}
//	return 0;
//}
//我只能说你是个大傻der，最大公约数！！！

//int main()
//{
//	int m, n, a;
//	int r = 1;
//	scanf("%d%d", &m, &n);
//	while (m > n && r!=0)
//	{
//		r = m % n;
//		a = r;
//		m = n;
//		n = r;
//	}
//	printf("其最大公约数为：%d\n", a);
//	return 0;
//}
//哈哈哈，大傻der，根本不会

//正解
//int main()
//{
//	int m, n, r;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("其最大公约数为：%d\n", n);
//	return 0;
//}


//4.打印1000到2000年间的闰年
//能被4整除，不能被100整除，或能被400整除的为闰年
//int main()
//{
//	int count=0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}



//重做！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//4.打印100-200的素数
//素数：除一和它本身外没有其他因数
// 
//试除法（代码搞不出来，以下是正解）
//int main()
//{
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//优化
//#include<math.h>
//int main()
//{
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <=sqrt(i)/*i/2也OK*/; j++)//sqrt:开平方的数学库函数
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//再优：除去偶数
//#include<math.h>
//int main()
//{
//	int j = 0;
//	for (int i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <=sqrt(i)/*i/2也OK*/; j++)//sqrt:开平方的数学库函数
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//CSDN的文章：《素数求解的n种境界》


//可以再做一遍，因为是先听完后写的
//5.从1-100所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//重做！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//6.计算1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum1 = 1/i + sum1;
//	}
//	for (int j = 2; j <= 100; j += 2)
//	{
//		sum2 = 1 / j + sum2;
//	}
//	int a = sum1 - sum2;
//	printf("%d\n",a);
//	return 0;
//}
//为啥不对呢，因为1/2在这里是0而不是0.5，so...
//int main()
//{
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum1 = 1.0/i + sum1;
//	}
//	for (int j = 2; j <= 100; j += 2)
//	{
//		sum2 = 1.0 / j + sum2;
//	}
//	double a = sum1 - sum2;
//	printf("%lf\n",a);
//	return 0;
//}
//老师的解法
//int main()
//{
//	int i = 0;
//	double sum=0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flag*(1.0 / i) + sum;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//重做！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//因为俺不会，哈哈哈哈,其实我看成了是排序，因为第一节C语言课上老师举了多数排序的例子
//7.求十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//but当是负数时就行不通了，会输出max=0,so...
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//重做+1，不会+1，唉
//8.输出9*9乘法表
// 这是9.27的copy来的
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1, j = 1; j <= 9; j++)
//		printf("%s\n",i*j==k);
//}
//emm大傻der根本不会
//正解
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//-2是为了让它对齐，2是向右对齐，-2是向左
//		}
//		printf("\n");
//	}
//	return 0;
//}


//9.二分查找
// 以下也是9.27那儿copy来的
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


//后边又讲了个猜数字游戏的代码，其他都还好，就引用函数那里不大会，而且挺复杂，记得以后再来复习时写一下，就不抄了，如果抄的话，肯定就完成今天的任务了，但那没意义，so,可以耍了