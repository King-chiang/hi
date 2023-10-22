#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 9;
//	float *pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//说明浮点型与整形的存储方式不同

//算法

//打印人名  运用结构体的那题
//瞅了一眼
//struct Stu
//{
//	char name[21];
//	int score;
//};
//int main()
//{
//	struct Stu a[100],t;
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%s %d", &a[i].name , &a[i].score );
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (a[j].score < a[j + 1].score)
//			{
//				t= a[j];
//				a[j]= a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", a[i].name);
//	}
//	return 0;
//}

//再写一遍快速排序吧
//int a[100], n;
//void quicksort(int left, int right)
//{
//	int i, j, temp, t;
//	i = left;
//	j = right;
//	temp = a[i];
//	while (i > j)
//		return;
//	while (i != j)
//	{
//		while (a[j] >= temp && i < j)
//			j--;
//		while (a[i] <= temp && i < j)
//			i++;
//		if (i < j)
//		{
//			t = a[j];
//			a[j] = a[i];
//			a[i] = t;
//		}
//	}
//	a[left] = a[i];//这俩处不熟
//	a[i] = temp;//这儿
//	quicksort(left, i - 1);
//	quicksort(i + 1, right);
//}
//int main()
//{
//	int i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	quicksort(1, n);
//	for (i = 1; i <= n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}


//进入第二章

//猜QQ号
//int main()
//{
//	int qq[100] = { 6, 3, 1, 7, 5, 8, 9, 2, 4 };
//	int head, tail, sz, i, j;
//	head = 0;
//	tail = 9;
//	for (i = 0; i < (tail - head - 2); i++)
//	{
//		head++;
//		qq[tail] = qq[head];
//	}
//	return 0;
//}
//不会
//emmm 一看，好简单，呜呜呜，我好垃圾
//int main()
//{
//	int qq[100] = { 6, 3, 1, 7, 5, 8, 9, 2, 4 },head,tail,i;
//	head = 0;
//	tail = 9;
//	while (head < tail)
//	{
//		printf("%d ", qq[head]);
//		head++;
//		qq[tail] = qq[head];
//		tail++;
//		head++;
//	}
//	return 0;
//}
//还是该理清思路，唉，看着简单，自己写又这儿不对那儿不对的

//使用结构体
struct queue
{
	int data[100];
	int head;
	int tail;
};
int main()
{
	struct queue qq;
	qq.head = 1;
	qq.tail = 1;
	int i;
	for (i = 1; i < 10; i++)
	{
		scanf("%d", &qq.data[qq.tail]);
		qq.tail++;
	}
	while (qq.head < qq.tail)
	{
		printf("%d ", qq.data [qq.head ]);
		qq.head++;
		qq.data[qq.tail] = qq.data[qq.head];
		qq.head++;
		qq.tail++;
	}
	return 0;
}