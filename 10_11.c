#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ֶ���֮

//����һ���������飬��������ӣ����ؽ��

//ʹ��ѭ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("���Ϊ��%d\n", sum);
//	return 0;
//}

//ʹ�õݹ�
//int Sum(int arr[], int sz)
//{
//	if (sz == 1)
//		return *arr;
//	else
//	{
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	Sum(arr, sz);
//	return 0;
//}
//����д����ԭ��һ��֪���п����ǿ����飬������������飻�����������鴫��ȥ������Ԫ�صĵ�ַ�������ں�����ε��ú���ʱ��Ԫ�ؼ�sum��֪��α����


//Ͱ����
//int main()
//{
//	int arr[11] = { 0 };
//	int i, j,t;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (j = 0; j <= 10; j++)
//	{
//		for (i = 0; i < arr[j]; i++)
//		{
//				printf("%d  ", j);
//		}
//	}
//	return 0;
//}
//��˵�ǿ���һ����д�ģ��������ȫ���ǵã�д��֮�����������Һ���д�Ĳ�һ����


//����10��0-1000֮��������Ӵ�С����
//int main()
//{
//	int arr[1001] = { 0 };
//	int t;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (int i = 0; i <= 1000; i++)
//	{
//		for (int j = 0; j < arr[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//���Ⲣ����������Ͱ����������Ͱ����Ҫ������


//ð������
//int main()
//{
//	int arr[] = { 8, 100, 50, 22, 15, 6, 1, 1000, 999, 0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int j = 0; j < sz; j++)
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�ٺٺ�һģһ����happy~~~

//�����һ�����������������������ڽṹ���һ�ûѧ������...But���������ѧ��


//��������
int main()
{
	int arr[] = { 2,8,5,0,7 };
	int i = 0;
	int j = 0;
	int t = 0;
	int sz = sizeof(arr) / sizeof(arr[1]);
	for (t = 0; t < sz / 2; t++)
	{
		for (i = 0, j = sz - 1; i < j; i++, j--)
		{
			if (arr[j]<arr[0] && arr[i]>arr[0])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		if (i == j)
		{
			int tmp = arr[0];
			arr[0] = arr[i];
			arr[i] = tmp;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}