#include<stdio.h>

int main()
{
	long long id,a;
	printf("请输入18位身份证号：\n");
	scanf("%lld",&id);
	a=id/(1e16);
	if(a==37)
	    printf("山东籍\n");
	else
	    printf("非山东籍\n");
	return 0;
 } 
 
 
int main()
{
	long long id,a,b,year;
	printf("请输入18位身份证号：\n");
	scanf("%lld",&id);
	a=1e12;
	b=id%a;
	year=b/(1e8);
	printf("出身年份为：%lld年\n",year); 
	return 0;
 } 
 
 
