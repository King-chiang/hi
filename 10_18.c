#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1.��������ɶ 
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
//��Үһϵ��ԭ�벹��... 


//2.������
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//�е�С˼·���������


//3.����2.�е�-128�����128�������һ���ģ���Ϊ128=127+1���ڱ���127+1=-128


//4.
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//���ǲ���Ӳ���


//5.
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//��Ҳ������ѭ��


//6.
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//		a[i] = -1 - i;
//	printf("%d", strlen(a));
//	return 0;
//}
//�ҵ�����


//7.
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//=>����unsigned


//Ok �������ͻع�һ���㷨��

//1.Ͱ����   5 3 5 2 8
//int main()
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < arr[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��ͷ�������ֵĵط�����һ��ǰ�ߵ�

//ð������    8 100 50 22 15 6 1 1000 999 0
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	printf("������ʮ��������");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &t);
//		arr[i] = t;
//	}
//	//int sz = sizeof(arr) / sizeof(arr[1]);
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�����������ģ���д��һ�飬�����ԣ����ǳ���һ�ۣ���������sz��Ȼ���ָ��˻�֮ǰд�ģ��ҵ����������ڣ����Ǽ��˺ͼ�����ûŪ���


//����Ҫ����ӡ����   ��huhu 5 �֡�haha 3 �֡�xixi 5 �֡�hengheng 2 �ֺ� gaoshou 8 ��
//typedef struct stu
//{
//	char name[20];
//	int result[10];
//}stu;
//
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	stu s1 = { "huhu",5 };
//	stu s2 = { "haha",3 };
//	stu s3 = { "xixi",5 };
//	stu s4 = { "hengheng",2 };
//	stu s5 = { "gaoshou",8 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[i] = t;
//	}
//	return 0;
//}
//�ṹ�廹�ǲ���


//��������    6 1 2 7 9 3 4 5 10 8
//int main()
//{
//	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i, j,tmp;
//	
//	while (i <= j)
//	{
//		if (arr[j] > arr[0])
//			j--;
//		if (arr[i] < arr[0])
//			i++;
//		else
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//
//	}
//	return 0;
//}
//������ôд������

//���������˰ɣ��е�ѧ����ȥ��