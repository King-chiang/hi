#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//���ڻ����ڴ����ϣ�ͬ־�ǻ�û�����Ը�ϰһ�������


//����n�Ľ׳�

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",& n);//д��д�ž�Ȼ��&����
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret = ret * i;
//	printf("��׳�Ϊ��%d", ret);
//	return 0;
//}

//����1��+2��+...+10��

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
//	printf("����Ϊ��%d\n", sum);
//	return 0;
//}

//���ַ�

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	//����д����ͳԷ�ȥ��
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k>arr[mid])
//			left = mid+1;
//		else if(k==arr[mid])//��Ү�����˰���������ȱ丳ֵ������=
//		{
//			printf("��ϲ�����ҵ������±�Ϊ��%d\n", mid);
//			break;
//		}
//		else
//			right = mid - 1;
//	}
//	if(left > right)
//		printf("sorry�������ڣ�");
//	return 0;
//}


//4.��ӡ��
// #########################
// W#######################!
// We#####################!!
// ...
//Welcom to bit!!!!!!!!!!!!!


//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = { "#########################" };
//	char arr2[] = { "Welcome to bit!!!!!!!!!!!!!" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)//ע��<��<=
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);//������%s
//		left++;
//		right--;
//	}
//	return 0;
//}


//5.ģ���û���¼�龰����ֻ�ܵ�¼����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s",&password);
//		if (strcmp(password,"jwh28507")==0)//�ַ���������==
//		{
//			printf("������ȷ��");
//			break;
//		}
//		else
//			printf("����������������룡");
//	}
//	return 0;
//}