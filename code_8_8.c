#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//if语句


//int main()
//{
//	int age = 17;
//	if (age < 18)
//		printf("您还未成年！");
//	else if (age >= 18 && age < 28)//18<=age<28是错误的表达，前边只要是假（0），就等价于0<28
//		printf("小青年一枚");
//	else if (age >= 28 && age < 55)
//		printf("您正值壮年！");
//	else
//		printf("长寿 长寿 长寿（重要的事情说三遍）");
//	return 0;
//}
//
////另一种
//int main()
//{
//	int age = 17;
//	if (age < 18)
//		printf("您还未成年！");
//	else
//	{
//		if (age >= 18 && age < 28)//18<=age<28是错误的表达，前边只要是假（0），就等价于0<28
//			printf("小青年一枚");
//		else if (age >= 28 && age < 55)
//			printf("您正值壮年！");
//		else
//			printf("长寿 长寿 长寿（重要的事情说三遍）");
//	}
//	return 0;
//}
//
////另外
//int main()
//{
//	int age = 17;
//	if (age < 18)
//	{
//		printf("您还未成年！\n");
//		printf("您还不能谈恋爱");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)//18<=age<28是错误的表达，前边只要是假（0），就等价于0<28
//			printf("小青年一枚");
//		else if (age >= 28 && age < 55)
//			printf("您正值壮年！");
//		else
//			printf("长寿 长寿 长寿（重要的事情说三遍）");
//	}
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//not you
//		if (b == 2)//else与此if匹配
//			printf("呵呵\n");
//		else
//			printf("哈哈\n");
//	return 0;
//}

//But
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//此时你配了
//	{
//		if (b == 2)
//			printf("呵呵\n");
//	}
//		else
//			printf("哈哈\n");
//	return 0;
//}

//小tips
//int main()
//{
//	int num = 4;
//	if (5 == num)//此处易写成num=5 so...
//		printf("hh\n");
//}

//练习
//1.判断一个数是否为奇数
//int main()
//{
//	int a = 28507;
//	if (a % 2 == 0)
//		printf("你是一个偶数");
//	else
//		printf("你是一个奇数");
//	return 0;
//}

//2.输出1-100之间的奇数
//需要用到while 呜呜呜俺不会



//switch语句


//int main()
//{
//	int day = 0;
//	scanf("%d ", &day);
//	switch (day)
//	{
//	case 1:
//		printf("今天星期一\n");
//		break;
//	case 2:
//		printf("今天星期二\n");
//		break;
//	case 3:
//		printf("今天星期三\n");
//		break;
//	case 4:
//		printf("今天星期四\n");
//		break;
//	case 5:
//		printf("今天星期五\n");
//		break;
//	case 6:
//		printf("今天星期六\n");
//		break;
//	case 7:
//		printf("今天星期天\n");
//		break;
// default:
//      printf("输入错误\n");
//      break;
//	}
//	return 0;
//}


//2023.9.22
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("今天要工作\n");
//		break;
//	case 2:
//		printf("今天要工作\n");
//		break;
//	case 3:
//		printf("今天要工作\n");
//		break;
//	case 4:
//		printf("今天要工作\n");
//		break;
//	case 5:
//		printf("今天要工作\n");
//		break;
//	case 6:
//		printf("今天休息\n");
//		break;
//	case 7:
//		printf("今天休息\n");
//		break;
// default:
//      printf("输入错误\n");
//      break;
//	}
//	return 0;
//}

//2023.9.23
//简化
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("今天要工作\n");
//		break;
//	case 6:
//	case 7:
//		printf("今天休息\n");
//		break;//建议保留break
// default:
//      printf("输入错误\n");
//      break;
//	}
//	return 0;
//}