#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//switch语句


//练习：求m,n的值
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//没有break，往后进入case2
//	case 2:
//		n++;
//	case 3:
//		switch (n)//switch可以嵌套使用
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;//此次只是跳出case3
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m,n);//m==4,n==3  错了
//	return 0;
//}


//while循环


//打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}//此处一定要有{}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//2023.9.23

//有关getchar

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };//char password = 0;错的，这应该是字符串的定义方式
//	printf("请输入密码：");
//	scanf("%s", password);
//	getchar();//必须要，用于读取\n
//	printf("请确认密码！（Y/N）：");
//	ret=getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//	return 0;
//}

//But,if有更多（123 abc），又不行了，so.....
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//char password = 0;错的，这应该是字符串的定义方式
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码！（Y/N）：");
//	ret=getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//	return 0;
//}