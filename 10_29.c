#include<stdio.h>

//www.stackoverflow.com
//segmentfault.com
//�����ʴ���վ

//��ά����Ĵ�ӡ 
// int main()
// {
// 	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
// 	int i,j;
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<5;j++)
// 		{
// 			printf("%d ",arr[i][j]);
//		 }
//		 printf("\n");
//	 }
// 	return 0;
// }

//�ú���
//void print1(int arr[3][5],int x,int y)
//{
//	int i,j;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr,3,5);
//	return 0;
//}

//ָ��
//void print2(int (*p)[5],int x,int y)
//{
//	int i,j;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",(*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print2(arr,3,5);
//	return 0;
// } 

//���㷨��
//�ж��Ƿ�Ϊ���ģ��ǿ���д�ģ��Լ��������ᣡ 
//#include<string.h>
//int main()
//{
//	char a[100],s[100];
//	int top,i,len,mid,next;
//	gets(a);
//	len=strlen(a);
//	mid=len/2-1;
//	top=0;
//	for(i=0;i<=mid;i++)
//	{
//		s[++top]=a[i];
//	}
//	if(len%2==0)
//	{
//		next=mid+1;
//	}
//	else
//	{
//		next=mid+2;
//	}
//	for(i=next;i<len;i++)
//	{
//		if(s[top]!=a[i])
//		    break;
//		top--;
//	}
//	if(top==0)
//	{
//		printf("Yes!");
//	}
//	else
//	{
//		printf("No!");
//	}
//	return 0;
// } 

//��ߺ��ѣ���˵�ɣ��ٺ٣���һ�� 
