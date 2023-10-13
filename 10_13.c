#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//实用调试技巧

//求1！+2！+...+n!,以下代码存在错误
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("d\n", sum);
//	return 0;
//}
//我感觉没错，但结果不对，所以调试！！
//ok,俺知道了，ret在循环后值不是1了，so...
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//为啥是死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hh\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//arr[12]和i的地址一样

//《C陷阱和缺陷》

//函数来拷贝字符
//void my_strcpy(char* a, char* b)
//{
//	while (*a != '\0')
//	{
//		*b = *a;
//		a++;
//		b++;
//	}
//	if(*a=='\0')
//	    *b = *a;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, arr2);
//	printf("%s ", arr2);
//	return 0;
//}//6分儿

//优化
//void my_strcpy(char* a, char* b)
//{
//	while (*b++ = *a++)
//	{
//		;//妙啊
//	}
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, arr2);
//	printf("%s ", arr2);
//	return 0;
//}//7分儿

//继续
//void my_strcpy(char* a, char* b)
//{
//	if (a != NULL && b != NULL)
//	{
//		while (*b++ = *a++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, NULL);
//	printf("%s ", arr2);
//	return 0;
//}

//再来
#include<assert.h>
//void my_strcpy(char* a, char* b)
//{
//	assert(a != NULL);//断言
//	assert(b != NULL);
//	while (*b++ = *a++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, NULL);
//	printf("%s ", arr2);
//	return 0;
//}//8分儿

//9分儿
//void my_strcpy(const char* a, char* b)//这样如果150行写反了，会报错
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*b++ = *a++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, NULL);
//	printf("%s ", arr2);
//	return 0;
//}

//10分儿
//char*  my_strcpy(const char* a, char* b)
//{
//	char* ret = b;
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*b++ = *a++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	printf("%s ", my_strcpy(arr1, arr2));
//	return 0;
//}


//strlen

//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//重点：const和assert