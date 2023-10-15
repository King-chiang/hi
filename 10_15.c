#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//		printf("为小端储存模式\n");
//	else
//		printf("为大端储存模式\n");
//	/*if (pa == "01")
//		printf("为大端储存模式\n");
//	else
//		printf("为小端储存模式\n");*/
//	//emmmm
//	return 0;
//}

//用函数
//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	/*int a = 1;
//	char* pa = (char*)&a;*///唉，傻了
//	int i=check_sys();
//	if(i==1)
//		printf("为小端储存模式\n");
//	else
//		printf("为大端储存模式\n");
//	return 0;
//}

//简化
//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;
//}
//int main()
//{
//	int i = check_sys();
//	if (i == 1)
//		printf("为小端储存模式\n");
//	else
//		printf("为大端储存模式\n");
//	return 0;
//}

//再简化
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int i = check_sys();
//	if (i == 1)
//		printf("为小端储存模式\n");
//	else
//		printf("为大端储存模式\n");
//	return 0;
//}