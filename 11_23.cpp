#include<stdio.h>


//昨日排序题快排 
//int a[101],n;
//
//void quicksort(int left,int right)
//{
//	if(left>right)
//	return;
//	int t;
//	int temp=a[left];
//	int i=left;
//	int j=right;
//	while(i!=j)
//	{
//		while(a[j]>=temp && i<j)
//		j--;
//		while(a[i]<=temp && i<j)
//		i++;
//		if(i<j)
//		{
//			t=a[i];
//			a[i]=a[j];
//			a[j]=t;	
//		}
//	}
//	a[left]=a[i];
//	a[i]=temp;
//	quicksort(left,i-1);
//	quicksort(i+1,right);
//}
//
//int main()
//{
//	int i,j,count=1;
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	scanf("%d",&a[i]);
//	
//	quicksort(1,n);
//	
//	for(i=2;i<=n;i++)
//	{
//		if(a[i]!=a[i-1])
//		count++;
//	}
//	printf("%d\n",count);
//	
//	printf("%d ",a[1]);
//	for(i=2;i<=n;i++)
//	{
//		if(a[i]!=a[i-1])
//		printf("%d ",a[i]);	
//	}
//	
//	return 0;
// } 



//奖学金

//struct note
//{
//	char name[20],west,woker;
//	int score,mate,paper,money;
//};
//
//int main()
//{
//	struct note stu[101];
//	int i,sum=0,n;
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].score,
//		  &stu[i].mate,&stu[i].woker,&stu[i].west,&stu[i].paper);
//		stu[i].money=0;
//	}
//	
//	for(i=1;i<=n;i++)
//	{
//		if(stu[i].score>80 && stu[i].paper>=1)
//		stu[i].money=stu[i].money+8000;
//		if(stu[i].score>85 && stu[i].mate>80)
//		stu[i].money=stu[i].money+4000;
//		if(stu[i].score>90)
//		stu[i].money=stu[i].money+2000;
//		if(stu[i].score>85 && stu[i].west=='Y')
//		stu[i].money=stu[i].money+1000;
//		if(stu[i].mate>80 && stu[i].woker=='Y')
//		stu[i].money=stu[i].money+850;
//	}
//	
//	int max=stu[1].money;
//	for(i=1;i<=n;i++)
//	{
//		if(stu[i].money>max)
//		max=stu[i].money;
//	}
//	
//	for(i=1;i<=n;i++)
//	{
//		if(stu[i].money==max)
//		{
//			printf("%s\n",stu[i].name);
//			printf("%d\n",stu[i].money);
//			break;		
//		}
//	}
//	
//	for(i=1;i<=n;i++)
//		sum=sum+stu[i].money;
//	printf("%d",sum);
//	
//	return 0;
// } 



//树
int main()
{
	int l,n,book[10001]={0},i,j,a[i],b[i],count=0;
	scanf("%d %d",&l,&n);
	for(i=1;i<=n;i++)
		scanf("%d %d",&a[i],&b[i]);
		
	for(i=1;i<=n;i++)
	{
		for(j=a[i];j<=b[i];j++)
		book[j]=1;
	}
	
	for(i=0;i<=l;i++)
	{
		if(book[i]==0)
		count++;
	}
	
	printf("%d",count);
	
	return 0;
 } 
//不知道为啥不对，测试数据下载不了 
