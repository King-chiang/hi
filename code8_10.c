#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//while循环

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//for循环

//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//变种

//1.省略
//int main()
//{
//	for (;;)
//		printf("啦啦啦");
//	return 0;
//}

//2.两个变量
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//		printf("啦啦啦\n");
//	return 0;
//}

//练习：要循环的次数
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0/*不是判断，是赋值，0为假，进不去*/; i++, k++)
//		k++;
//	return 0;
//}



//do while循环

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}




//练习

//1.计算n的阶乘
//int main()
//{
//	int n = 0;
//	for (n = 1;; n++)
//		printf("%d\n", n * (n - 1));
//	return 0;
//}
//上边俺自己写的，跟智障一样

//正解
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret = ret * i;
//	printf("阶乘为%d\n", ret);
//	return 0;
//}

//2.计算1!+2!+3!+...+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//很激动啊，自己个儿写对六，哈哈哈哈哈哈  

//3.在一个有序数组中查找具体的某个数字n

//基础方法

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("sorry,找不到%d\n");
//	return 0;
//}

//二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz= sizeof(arr) / sizeof(arr[0]);
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
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("sorry,找不到\n");
//}
//俺滴娘啊，难死了，抄都难死了
//老师讲了，还得自己个儿写，找工作时这是最简单滴了


//4.打印出
// #########################
// W#######################!
// We#####################!!
// ...
//Welcom to bit!!!!!!!!!!!!!

//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!!!!!!!!!";
//	char arr2[] = "############################";
//	int left = 0;
//	int right = strlen/*#include<string.h>*/(arr1) - 1;//或者int right=sizeof(arr1)/sizeof(arr[0])-2
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep/*#include<windows.h>*/(1000);//休息一秒
//		//system/*#include<stdlib.h>*/("cls");//执行系统命令的一个函数  cls->清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//5.模拟用户登录情景，且只能登录三次

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}