#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//		printf("ΪС�˴���ģʽ\n");
//	else
//		printf("Ϊ��˴���ģʽ\n");
//	/*if (pa == "01")
//		printf("Ϊ��˴���ģʽ\n");
//	else
//		printf("ΪС�˴���ģʽ\n");*/
//	//emmmm
//	return 0;
//}

//�ú���
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
//	char* pa = (char*)&a;*///����ɵ��
//	int i=check_sys();
//	if(i==1)
//		printf("ΪС�˴���ģʽ\n");
//	else
//		printf("Ϊ��˴���ģʽ\n");
//	return 0;
//}

//��
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
//		printf("ΪС�˴���ģʽ\n");
//	else
//		printf("Ϊ��˴���ģʽ\n");
//	return 0;
//}

//�ټ�
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int i = check_sys();
//	if (i == 1)
//		printf("ΪС�˴���ģʽ\n");
//	else
//		printf("Ϊ��˴���ģʽ\n");
//	return 0;
//}