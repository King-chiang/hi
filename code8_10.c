#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//whileѭ��

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//forѭ��

//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//����

//1.ʡ��
//int main()
//{
//	for (;;)
//		printf("������");
//	return 0;
//}

//2.��������
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//		printf("������\n");
//	return 0;
//}

//��ϰ��Ҫѭ���Ĵ���
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0/*�����жϣ��Ǹ�ֵ��0Ϊ�٣�����ȥ*/; i++, k++)
//		k++;
//	return 0;
//}



//do whileѭ��

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}




//��ϰ

//1.����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	for (n = 1;; n++)
//		printf("%d\n", n * (n - 1));
//	return 0;
//}
//�ϱ߰��Լ�д�ģ�������һ��

//����
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret = ret * i;
//	printf("�׳�Ϊ%d\n", ret);
//	return 0;
//}

//2.����1!+2!+3!+...+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�ܼ��������Լ�����д������������������  

//3.��һ�����������в��Ҿ����ĳ������n

//��������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("sorry,�Ҳ���%d\n");
//	return 0;
//}

//���ַ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz= sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("sorry,�Ҳ���\n");
//}
//�����ﰡ�������ˣ�����������
//��ʦ���ˣ������Լ�����д���ҹ���ʱ������򵥵���


//4.��ӡ��
// #########################
// W#######################!
// We#####################!!
// ...
//Welcom to bit!!!!!!!!!!!!!

//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!!!!!!!!!";
//	char arr2[] = "############################";
//	int left = 0;
//	int right = strlen/*#include<string.h>*/(arr1) - 1;//����int right=sizeof(arr1)/sizeof(arr[0])-2
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep/*#include<windows.h>*/(1000);//��Ϣһ��
//		//system/*#include<stdlib.h>*/("cls");//ִ��ϵͳ�����һ������  cls->�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//5.ģ���û���¼�龰����ֻ�ܵ�¼����

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}