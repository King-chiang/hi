#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�����ĵݹ�


//1.����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ����������1234�������1    2    3    4
//��д��������д�ģ�
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//2.��д��������������ʱ���������ַ����ĳ���
//��д��������д�ģ�
//�Ȳ��ܵ�һ��(����������ֱ��copy�ģ����ᰡ��һ�漰ָ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//3.��n�Ľ׳�
//֮ǰд���ģ�����һ���
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		ret = i * ret;
//	printf("%d\n", ret);
//	return 0;
//}

//�ú���
//int Fac1(int i)
//{
//	int ret = 1;
//	for (int j = 1; j <= i; j++)
//		ret = ret * j;
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	int a=Fac1(n);
//	printf("%d\n", a);
//	return 0;
//}

//�����д����Ϊ��������д�ģ�
//�õݹ�
//int Fac(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*Fac(i - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	int a=Fac(n);
//	printf("%d\n", a);
//	return 0;
//}


//4.���n��쳲�������
//쳲��������У�1 1 2 3 5 8 13 21 34.........
//int Fib(int i)
//{
//	if (i <= 2)
//		return 1;
//	else
//		return Fib(i - 1) + Fib(i - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}
//good job!

//����Ч��̫���������õݹ����
//��д�������ᣡ�����д������Щ
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = a + b;
//	int count = 3;
//	if (i == 1 && i == 2)
//		return 1;
//	else if (i == 3)
//		return 2;
//	else
//	{
//		while (count != i)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//			count++;
//		}
//		return c;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}

//�����
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = Fib(n);
//	printf("%d\n", a);
//	return 0;
//}


//�����о�  �ݹ龭�䰸����1.��ŵ������     2.������̨������


//����������Ҫ��д��

//1.дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int k = 7;
//	int a = binary_search(arr, k,sz);
//	if (a == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("%d\n", a);
//	return 0;
//}


//2.дһ��������ÿ����һ�θú���num��+1
//int ADD(int x, int y)
//{
//	int num = 0;
//	int sum = x + y;
//	num++;
//	return num;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	i=ADD(a, b);
//	printf("%d\n", i);
//	scanf("%d%d", &a, &b);
//	i = ADD(a, b);
//	printf("%d\n", i);
//	scanf("%d%d", &a, &b);
//	i = ADD(a, b);
//	printf("%d\n", i);
//}

//OK,���˲��ᣬ�����������������ˣ���Ү

//�����������ȷ��copy�����ո�300�У��������������أ����ˣ���Ҫ�����ˣ��ݰݣ������

//hh,�����ȥ�ˣ�so����һ�£���Ц��

//����

//���˵�㣬ûɶ��д��