#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//if���


//int main()
//{
//	int age = 17;
//	if (age < 18)
//		printf("����δ���꣡");
//	else if (age >= 18 && age < 28)//18<=age<28�Ǵ���ı�ǰ��ֻҪ�Ǽ٣�0�����͵ȼ���0<28
//		printf("С����һö");
//	else if (age >= 28 && age < 55)
//		printf("����ֵ׳�꣡");
//	else
//		printf("���� ���� ���٣���Ҫ������˵���飩");
//	return 0;
//}
//
////��һ��
//int main()
//{
//	int age = 17;
//	if (age < 18)
//		printf("����δ���꣡");
//	else
//	{
//		if (age >= 18 && age < 28)//18<=age<28�Ǵ���ı�ǰ��ֻҪ�Ǽ٣�0�����͵ȼ���0<28
//			printf("С����һö");
//		else if (age >= 28 && age < 55)
//			printf("����ֵ׳�꣡");
//		else
//			printf("���� ���� ���٣���Ҫ������˵���飩");
//	}
//	return 0;
//}
//
////����
//int main()
//{
//	int age = 17;
//	if (age < 18)
//	{
//		printf("����δ���꣡\n");
//		printf("��������̸����");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)//18<=age<28�Ǵ���ı�ǰ��ֻҪ�Ǽ٣�0�����͵ȼ���0<28
//			printf("С����һö");
//		else if (age >= 28 && age < 55)
//			printf("����ֵ׳�꣡");
//		else
//			printf("���� ���� ���٣���Ҫ������˵���飩");
//	}
//	return 0;
//}

//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//not you
//		if (b == 2)//else���ifƥ��
//			printf("�Ǻ�\n");
//		else
//			printf("����\n");
//	return 0;
//}

//But
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//��ʱ������
//	{
//		if (b == 2)
//			printf("�Ǻ�\n");
//	}
//		else
//			printf("����\n");
//	return 0;
//}

//Сtips
//int main()
//{
//	int num = 4;
//	if (5 == num)//�˴���д��num=5 so...
//		printf("hh\n");
//}

//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 28507;
//	if (a % 2 == 0)
//		printf("����һ��ż��");
//	else
//		printf("����һ������");
//	return 0;
//}

//2.���1-100֮�������
//��Ҫ�õ�while �����ذ�����



//switch���


//int main()
//{
//	int day = 0;
//	scanf("%d ", &day);
//	switch (day)
//	{
//	case 1:
//		printf("��������һ\n");
//		break;
//	case 2:
//		printf("�������ڶ�\n");
//		break;
//	case 3:
//		printf("����������\n");
//		break;
//	case 4:
//		printf("����������\n");
//		break;
//	case 5:
//		printf("����������\n");
//		break;
//	case 6:
//		printf("����������\n");
//		break;
//	case 7:
//		printf("����������\n");
//		break;
// default:
//      printf("�������\n");
//      break;
//	}
//	return 0;
//}


//2023.9.22
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����Ҫ����\n");
//		break;
//	case 2:
//		printf("����Ҫ����\n");
//		break;
//	case 3:
//		printf("����Ҫ����\n");
//		break;
//	case 4:
//		printf("����Ҫ����\n");
//		break;
//	case 5:
//		printf("����Ҫ����\n");
//		break;
//	case 6:
//		printf("������Ϣ\n");
//		break;
//	case 7:
//		printf("������Ϣ\n");
//		break;
// default:
//      printf("�������\n");
//      break;
//	}
//	return 0;
//}

//2023.9.23
//��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("����Ҫ����\n");
//		break;
//	case 6:
//	case 7:
//		printf("������Ϣ\n");
//		break;//���鱣��break
// default:
//      printf("�������\n");
//      break;
//	}
//	return 0;
//}