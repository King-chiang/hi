#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//switch���


//��ϰ����m,n��ֵ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//û��break���������case2
//	case 2:
//		n++;
//	case 3:
//		switch (n)//switch����Ƕ��ʹ��
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;//�˴�ֻ������case3
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m,n);//m==4,n==3  ����
//	return 0;
//}


//whileѭ��


//��ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}//�˴�һ��Ҫ��{}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//2023.9.23

//�й�getchar

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };//char password = 0;��ģ���Ӧ�����ַ����Ķ��巽ʽ
//	printf("���������룺");
//	scanf("%s", password);
//	getchar();//����Ҫ�����ڶ�ȡ\n
//	printf("��ȷ�����룡��Y/N����");
//	ret=getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//	return 0;
//}

//But,if�и��ࣨ123 abc�����ֲ����ˣ�so.....
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//char password = 0;��ģ���Ӧ�����ַ����Ķ��巽ʽ
//	printf("���������룺");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����룡��Y/N����");
//	ret=getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//	return 0;
//}