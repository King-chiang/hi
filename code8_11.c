#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����

//int ADD(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//strcpy-string copy->�ַ�������  ͷ�ļ�->#include<string.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "7777777";
//	strcpy(arr2/*Ŀ�ĵ�*/, arr1/*Ҫ������*/);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset����  memset(1,2,3)->��1�е�3���ַ���2���

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



//�Զ��庯��


//ȡ�����еĽϴ�ֵ

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//ʹa,b��ֵ����

//��ʹ�ú���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//Ҫʹ�ú���
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}//������ ��ʵ���Ǵ�� ��Ϊx,y��a,b�ĵ�ַ��ͬ

//����

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("This is a program.\n");
//	return 0;
//}