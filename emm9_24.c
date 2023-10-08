#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//现在还是在大早上，同志们还没起，所以复习一下昨天的


//计算n的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",& n);//写着写着竟然把&丢了
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret = ret * i;
//	printf("其阶乘为：%d", ret);
//	return 0;
//}

//计算1！+2！+...+10！

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
//	printf("其结果为：%d\n", sum);
//	return 0;
//}

//二分法

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	//早上写到这就吃饭去了
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k>arr[mid])
//			left = mid+1;
//		else if(k==arr[mid])//妈耶，搞了半天结果是相等变赋值，丢了=
//		{
//			printf("恭喜，已找到，其下标为：%d\n", mid);
//			break;
//		}
//		else
//			right = mid - 1;
//	}
//	if(left > right)
//		printf("sorry，不存在！");
//	return 0;
//}


//4.打印出
// #########################
// W#######################!
// We#####################!!
// ...
//Welcom to bit!!!!!!!!!!!!!


//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = { "#########################" };
//	char arr2[] = { "Welcome to bit!!!!!!!!!!!!!" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)//注意<和<=
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);//这里是%s
//		left++;
//		right--;
//	}
//	return 0;
//}


//5.模拟用户登录情景，且只能登录三次
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s",&password);
//		if (strcmp(password,"jwh28507")==0)//字符串不能用==
//		{
//			printf("密码正确！");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入！");
//	}
//	return 0;
//}