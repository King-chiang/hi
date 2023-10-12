#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//结构体

//struct stu
//{
//	char name[20];
//	short age;
//	char num[15];
//	char sex[5];
//}s1,s2,s3;

//typedef struct stu
//{
//	char name[20];
//	short age;
//	char num[15];
//	char sex[5];
//}stu;
//
//int main()
//{
//	stu s = { "江南忆",17,202311000407,"女" };
//	printf("%s ", s.name);
//	return 0;
//}

typedef struct stu
{
	char name[20];
	short age;
	char num[15];
	char sex[5];
}stu;

void Print1(stu a)
{
	printf("%d ", a.age);
}

void Print2(stu* pa)
{
	printf("%s ", pa->name);
}
int main()
{
	stu first = { "江南忆",17,202311000407,"女" };
	Print1(first);
	Print2(&first);
	return 0;
}