#include<stdio.h>

int main()
{
	long long id,a;
	printf("������18λ���֤�ţ�\n");
	scanf("%lld",&id);
	a=id/(1e16);
	if(a==37)
	    printf("ɽ����\n");
	else
	    printf("��ɽ����\n");
	return 0;
 } 
 
 
int main()
{
	long long id,a,b,year;
	printf("������18λ���֤�ţ�\n");
	scanf("%lld",&id);
	a=1e12;
	b=id%a;
	year=b/(1e8);
	printf("�������Ϊ��%lld��\n",year); 
	return 0;
 } 
 
 
