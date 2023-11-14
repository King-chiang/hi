#include<stdio.h>


//图的广度优先遍历

//struct note
//{
//	int x,s;
//};
//
//int main()
//{
//	struct note que[2501];
//	int a[51][51],book[51]={0};
//	int n,m,cur,startx,head=1,tail=1,i,j,k,end,flag;
//	
//	scanf("%d%d%d%d",&n,&m,&startx,&end);
//	for(i=1;i<=m;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//			if(i==j)
//			a[i][j]=0;
//			else
//			a[i][j]=99999999;
//		}
//	}
//	for(k=1;k<=m;k++)
//	{
//		scanf("%d%d",&i,&j);
//		a[i][j]=1;
//		a[j][i]=1;
//	}
//	
//	que[tail].x =startx;
//	que[tail].s =0;
//	tail++;
//	book[startx]=1;
//	
//	while(head<tail)
//	{
//		cur=que[head].x ;
//		for(i=1;i<=n;i++)
//		{
//			if(a[cur][i]==1 && book[i]==0)
//			{
//				book[i]=1;
//				que[tail].x=i;
//				que[tail].s=que[head].s +1;
//				tail++;
//			}
//			if(tail==end+1)
//			{
//				flag=1;
//				break;
//			}
//		}
//		if(flag==1)
//		break;
//		head++;
//	}
//	
//	printf("%d",que[tail-1].s );//为啥s没取最小值 
//	
//	return 0;
// } 


//Floyd-Warshall
//int main()
//{
//	int i,j,n,m,a,b,c,k;
//	int e[10][10];
//	
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			if(i==j)
//			e[i][j]=0;
//			else
//			e[i][j]=99999999;
//		}
//	}
//	for(i=1;i<=m;i++)
//	{
//		scanf("%d%d%d",&a,&b,&c);
//		e[a][b]=c;
//	}
//	
//	for(k=1;k<=n;k++)
//	{
//		for(i=1;i<=n;i++)
//		{
//			for(j=1;j<=n;j++)
//			{
//				if(e[i][k]+e[k][j]<e[i][j])
//				e[i][j]=e[i][k]+e[k][j];
//			}
//		}
//	}
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			printf("%3d",e[i][j]);	
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
