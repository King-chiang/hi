#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ð������
//����д��,��������һ�飬��дһ��

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d  ", arr[i]);
//	return 0;
//}

//�Ż�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//      int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//	if (flag == 1)
//		break;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d  ", arr[i]);
//	return 0;
//}

//����и��������ɨ�׵���Ϸ����ͷ����ѧ��

//leetcode


//������

//�����⣺���ܴ�����ʱ������ʵ������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}

//���ǻ�����������a,b���Ƚϴ�ʱ��a+b���п��������so...

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//��һ�������������ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//���ǵ�aΪ����ʱ���У�so...
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a>>i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//360������
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i=a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//����һ���ṹ�ĳ�Ա
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};//����һ���ṹ�����ͣ�struct Stu
//int main()
//{
//	struct Stu s1 = { "����",20,"202311000407" };//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}


//������ˢ��

//1.����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ�����������������������ǵ������±ꡣ
//  ����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�����԰�����˳�򷵻ش�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int target = 7;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; arr[i] <= (target/2); i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] + arr[j] == target && i != j)
//				printf("%d %d\n", i, j);
//		}
//	}
//	return 0;
//}