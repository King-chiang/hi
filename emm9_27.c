#define _CRT_SECURE_NO_WARNINGS 1

//����Ҫ�ż���������������

//ѧϰ�⺯����www.cplusplus.com   MSDN   http://en.cppreference.com(good)


//��һ�ºþ�֮ǰ����ҵ

//���������Ľϴ�ֵ
#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}



//дһ���������������Ľϴ�ֵ
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = MAX(a, b);
//	printf("��ϴ�ֵΪ��%d", max);
//	return 0;
//}


//����˷��ھ���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = i * j;
//	for (i = 1, j = 1; j <= 9; j++)
//		printf("%s\n",i*j==k);
//}
//emm��ɵder��������



//��һ���������������в��Ҿ����ĳ����
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