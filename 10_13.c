#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ʵ�õ��Լ���

//��1��+2��+...+n!,���´�����ڴ���
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
//�Ҹо�û����������ԣ����Ե��ԣ���
//ok,��֪���ˣ�ret��ѭ����ֵ����1�ˣ�so...
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


//Ϊɶ����ѭ��
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
//arr[12]��i�ĵ�ַһ��

//��C�����ȱ�ݡ�

//�����������ַ�
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
//}//6�ֶ�

//�Ż�
//void my_strcpy(char* a, char* b)
//{
//	while (*b++ = *a++)
//	{
//		;//�
//	}
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#########";
//	my_strcpy(arr1, arr2);
//	printf("%s ", arr2);
//	return 0;
//}//7�ֶ�

//����
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

//����
#include<assert.h>
//void my_strcpy(char* a, char* b)
//{
//	assert(a != NULL);//����
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
//}//8�ֶ�

//9�ֶ�
//void my_strcpy(const char* a, char* b)//�������150��д���ˣ��ᱨ��
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

//10�ֶ�
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

//�ص㣺const��assert