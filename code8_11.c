#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数

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

//strcpy-string copy->字符串拷贝  头文件->#include<string.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "7777777";
//	strcpy(arr2/*目的地*/, arr1/*要拷贝的*/);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset函数  memset(1,2,3)->将1中的3个字符用2替代

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



//自定义函数


//取两数中的较大值

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

//使a,b数值互换

//不使用函数
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

//要使用函数
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
//}//哈哈哈 其实它是错的 因为x,y和a,b的地址不同

//正解

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