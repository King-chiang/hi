#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�þ���ǰ����ҵ

//1.���������Ӵ�С�����
//int main()
//{
//	int a, b, c;
//	printf("��������������");
//	scanf("%d%d%d", &a, &b, &c);
//	if(a>b>c)
//		printf("��˳��Ϊ��%d %d %d\n", a, b, c);
//	else if (a > c > b)
//		printf("��˳��Ϊ��%d %d %d\n", a, c, b);
//	else if (b> a > c)
//		printf("��˳��Ϊ��%d %d %d\n", b, a, c);
//	else if (b> c> a)
//		printf("��˳��Ϊ��%d %d %d\n", b, c, a);
//	else if (c> a > b)
//		printf("��˳��Ϊ��%d %d %d\n", c, a, b);
//	else
//		printf("��˳��Ϊ��%d %d %d\n", c, b, a);
//	return 0;
//}


//2.��ӡ1-100������3�ı���
//int main()
//{
//	int a=0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//	}
//	return 0;
//}


//�ǵ�Ҫ��������������������������������������������������������������������������
//3.���������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a % b == 0)
//		printf("�����Լ��Ϊ��%d\n", a);
//	else if (b % a == 0)
//		printf("�����Լ��Ϊ��%d\n", b);
//	else
//	{
//		c = a * b;
//		printf("�����Լ��Ϊ��%d\n", c);
//	}
//	return 0;
//}
//��ֻ��˵���Ǹ���ɵder�����Լ��������

//int main()
//{
//	int m, n, a;
//	int r = 1;
//	scanf("%d%d", &m, &n);
//	while (m > n && r!=0)
//	{
//		r = m % n;
//		a = r;
//		m = n;
//		n = r;
//	}
//	printf("�����Լ��Ϊ��%d\n", a);
//	return 0;
//}
//����������ɵder����������

//����
//int main()
//{
//	int m, n, r;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("�����Լ��Ϊ��%d\n", n);
//	return 0;
//}


//4.��ӡ1000��2000��������
//�ܱ�4���������ܱ�100���������ܱ�400������Ϊ����
//int main()
//{
//	int count=0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}



//����������������������������������������������������������������������������������
//4.��ӡ100-200������
//��������һ����������û����������
// 
//�Գ���������㲻���������������⣩
//int main()
//{
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//�Ż�
//#include<math.h>
//int main()
//{
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <=sqrt(i)/*i/2ҲOK*/; j++)//sqrt:��ƽ������ѧ�⺯��
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//���ţ���ȥż��
//#include<math.h>
//int main()
//{
//	int j = 0;
//	for (int i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <=sqrt(i)/*i/2ҲOK*/; j++)//sqrt:��ƽ������ѧ�⺯��
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//CSDN�����£�����������n�־��硷


//��������һ�飬��Ϊ���������д��
//5.��1-100���������г��ֶ��ٸ�����9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����������������������������������������������������������������������������������
//6.����1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum1 = 1/i + sum1;
//	}
//	for (int j = 2; j <= 100; j += 2)
//	{
//		sum2 = 1 / j + sum2;
//	}
//	int a = sum1 - sum2;
//	printf("%d\n",a);
//	return 0;
//}
//Ϊɶ�����أ���Ϊ1/2��������0������0.5��so...
//int main()
//{
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum1 = 1.0/i + sum1;
//	}
//	for (int j = 2; j <= 100; j += 2)
//	{
//		sum2 = 1.0 / j + sum2;
//	}
//	double a = sum1 - sum2;
//	printf("%lf\n",a);
//	return 0;
//}
//��ʦ�Ľⷨ
//int main()
//{
//	int i = 0;
//	double sum=0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = flag*(1.0 / i) + sum;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//����������������������������������������������������������������������������������
//��Ϊ�����ᣬ��������,��ʵ�ҿ�������������Ϊ��һ��C���Կ�����ʦ���˶������������
//7.��ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//but���Ǹ���ʱ���в�ͨ�ˣ������max=0,so...
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//����+1������+1����
//8.���9*9�˷���
// ����9.27��copy����
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1, j = 1; j <= 9; j++)
//		printf("%s\n",i*j==k);
//}
//emm��ɵder��������
//����
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//-2��Ϊ���������룬2�����Ҷ��룬-2������
//		}
//		printf("\n");
//	}
//	return 0;
//}


//9.���ֲ���
// ����Ҳ��9.27�Ƕ�copy����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k,mid;
//	scanf("%d", &k);
//	int lenth = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = lenth - 1;
//	while(left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k == arr[mid])
//		{
//			printf("�ҵ��ˣ����±�Ϊ��%d\n", mid);
//			break;
//		}
//		else
//			right = mid - 1;
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}


//����ֽ��˸���������Ϸ�Ĵ��룬���������ã������ú������ﲻ��ᣬ����ͦ���ӣ��ǵ��Ժ�������ϰʱдһ�£��Ͳ����ˣ�������Ļ����϶�����ɽ���������ˣ�����û���壬so,����ˣ��