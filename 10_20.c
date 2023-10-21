#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//2023.10.20

//快速排序
//void quicksort(int left,int right)
//{
//	int arr[100];
//	int i = left;
//	int j = right;
//	int t = 0;
//	int tmp = 0;
//	int temp = arr[left];
//	if (left > right)
//		return;
//	while (i != j)
//	{
//		while (arr[j] > temp)
//			j--;
//		while(arr[i] < temp)
//			i++;
//		if (i < j)
//		{
//			tmp = arr[j];
//			arr[j] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	arr[i] = temp;
//	quicksort(left,i-1);
//	quicksort(i+1,right);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int t = 0;
//	int arr[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &t);
//		arr[i] = t;
//	}
//	quicksort(0, n-1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//不对，但我找不出来，呜呜呜

//int a[101], n;//定义全局变量，这两个变量需要在子函数中使用 
//void quicksort(int left, int right)
//{
//	int i, j, t, temp;
//	if (left > right)
//		return;
//
//	temp = a[left]; //temp中存的就是基准数 
//	i = left;
//	j = right;
//	while (i != j)
//	{
//		//顺序很重要，要先从右往左找 
//		while (a[j] >= temp && i < j)
//			j--;
//		//再从左往右找 
//		while (a[i] <= temp && i < j)
//			i++;
//		//交换两个数在数组中的位置 
//		if (i < j)//当哨兵i和哨兵j没有相遇时
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	//最终将基准数归位 
//	a[left] = a[i];
//	a[i] = temp;
//
//	quicksort(left, i - 1);//继续处理左边的，这里是一个递归的过程 
//	quicksort(i + 1, right);//继续处理右边的，这里是一个递归的过程 
//}
//int main()
//{
//	int i, j, t;
//	//读入数据 
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	quicksort(1, n); //快速排序调用   不明白为什么是1和n
//
//	//输出排序后的结果 
//	for (i = 1; i <= n; i++)
//		printf("%d ", a[i]);
//	getchar(); getchar();
//	return 0;
//}


//2023.10.21

//小哼买书  要求去重并排序

//桶排序
//int main()
//{
//	int n = 0;
//	int arr[1001] = {0};
//	int t = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &t);
//		arr[t]++;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//对啦！！！

//先排序后去重
//冒泡排序
//int main()
//{
//	int a[100],n,tmp,i,j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (a[i + 1] != a[i])
//			printf("%d ", a[i]);
//	}
//	return 0;
//}

//快速排序
int a[101], n;
void quicksort(int left, int right)
{
	if (left > right)
		return;
	int i, j, t, temp;
	i = left;
	j = right;
	temp = a[i];
	while (i != j)
	{
		while (a[j] >= temp && i < j)
			j--;
		while (a[i] <= temp && i < j)
			i++;
		if (i < j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);
}
int main()
{
	int i, j;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
		scanf("%d", &a[i]);
	quicksort(1, n);
	for (i = 1; i <= n; i++)
	{
		if (a[i + 1] != a[i])
			printf("%d ", a[i]);
	}
	return 0;
}