#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������9.30������

//1.���������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n != 0)
//	{
//		a = m % n;
//		m = n;
//		n = a;
//	}
//	printf("�����Լ��Ϊ��%d\n", n);
//	return 0;
//}


//2.��ӡ100-200������
//int main()
//{
//	int a, b;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (b == a)
//			printf("%d  ", a);
//	}
//	return 0;
//}


//3.��1-100���������г��ֶ��ٸ�����9
//int main()
//{
//	int a = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			a++;
//		if (i / 10 == 9)
//			a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//4.����1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = flag * (1.0 / i) + sum;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//������%lf������%d
//	return 0;
//}


//5.��ʮ�����е����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}


//6.���9*9�˷���
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}


//Ȼ����һ�ں���ֽ���goto��������ͷ����������Ϸ��ʱ�������󿴿���


//��������ϰ

//1.дһ�����������ж�һ�����ǲ�������
//void SS(x)
//{
//	int y = 2;
//	for (y = 2; y < x; y++)
//	{
//		if (x % y == 0)
//			break;
//	}
//	if (x == y)
//		printf("����һ������");
//	else
//		printf("�ⲻ��һ������");//������Ҫ�ں����ڴ�ӡ
//}
//int main()
//{
//	printf("������һ������");
//	int a = 0;
//	scanf("%d", &a);
//	SS(a);
//	return 0;
//}
//�Լ��������ǿ��Եģ�����ʦ��������д��
//��ӡ100-200�������
//int is_prime(int n)
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n",i);
//	}
//}


//2.дһ�������ж�һ���Ƿ�Ϊ����
//����֮ǰ�Ĵ�ӡ1000-2000֮�������
//int is_leap_year(a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d  ", year);
//	}
//	return 0;
//}


//��д����������������������������������������������������������������������������
//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[],int a,int sz)//��Ҫֻдarr��a
//{            //������arr��ָ��  ���԰�sz������
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//			right = mid - 1;
//		else if (arr[mid] < a)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int mid=0;
//	             //����ȥ������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k,sz);//���Դ���������,��������mid,������printf("%d",mid)
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ�%d\n", ret);
//	return 0;
//}
//�����أ������ᣬ���ڣ�����һ����һ�ε��޸�����OK�ˣ����⣩


//���¿���������������������������������������������������������������������������
//4.дһ��������ÿ����һ�θú���num��+1
//�����������ʲô��˼
//ADD(int* p)
//{
//	(*p)++;//һ��Ҫ�У�������Ϊ++�����ȼ���Щ
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}