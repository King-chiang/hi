#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//2023.10.20

//��������
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

//���ԣ������Ҳ�������������

//int a[101], n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ�� 
//void quicksort(int left, int right)
//{
//	int i, j, t, temp;
//	if (left > right)
//		return;
//
//	temp = a[left]; //temp�д�ľ��ǻ�׼�� 
//	i = left;
//	j = right;
//	while (i != j)
//	{
//		//˳�����Ҫ��Ҫ�ȴ��������� 
//		while (a[j] >= temp && i < j)
//			j--;
//		//�ٴ��������� 
//		while (a[i] <= temp && i < j)
//			i++;
//		//�����������������е�λ�� 
//		if (i < j)//���ڱ�i���ڱ�jû������ʱ
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	//���ս���׼����λ 
//	a[left] = a[i];
//	a[i] = temp;
//
//	quicksort(left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ��� 
//	quicksort(i + 1, right);//���������ұߵģ�������һ���ݹ�Ĺ��� 
//}
//int main()
//{
//	int i, j, t;
//	//�������� 
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	quicksort(1, n); //�����������   ������Ϊʲô��1��n
//
//	//��������Ľ�� 
//	for (i = 1; i <= n; i++)
//		printf("%d ", a[i]);
//	getchar(); getchar();
//	return 0;
//}


//2023.10.21

//С������  Ҫ��ȥ�ز�����

//Ͱ����
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
//����������

//�������ȥ��
//ð������
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

//��������
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