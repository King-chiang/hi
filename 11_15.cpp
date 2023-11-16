#include<stdio.h>



// Dijkstra算法
//int main()
//{
//	int e[10][10],book[10]={0},dis[10];
//	int n,m,i,j,u,v,t1,t2,t3,min;
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
//	 } 
//	 for(i=1;i<=m;i++)
//	 {
//	 	scanf("%d%d%d",&t1,&t2,&t3);
//	 	e[t1][t2]=t3;
//	 }
//	 book[1]=1;
//	 
//	 for(i=1;i<=n;i++)
//	 {
//	 	dis[i]=e[1][i];
//	 }
//	 
//	 for(i=1;i<=n-1;i++)
//	 {
//	 	min=99999999;//min得初始化！！！！！ 
//	 	for(j=1;j<=n;j++)
//	 	{
//	 		if(dis[j]<min && book[j]==0)
//	 		{
//	 			min=dis[j];
//	 			u=j;
//			 }
//	    }
//		 book[u]=1;
//		 for(v=1;v<=n;v++)
//		 {
//		 	if(dis[u]+e[u][v]<dis[v])
//		 	{
//		 		dis[v]=dis[u]+e[u][v];
//			}
//		 }
//	 }
//	 
//	 for(i=1;i<=n;i++)
//	 printf("%d ",dis[i]);
//	
//	return 0;
// } 


//Bellman Ford算法 
//int main()
//{
//	int e[10][10],dis[10];
//	int n,m,i,j,u[10],v[10],w[10];
//	
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++)
//	{
//		scanf("%d%d%d",&u[i],&v[i],&w[i]);
//	}
//	for(i=1;i<=n;i++)
//	{
//		dis[i]=99999999;//为啥一定得这样写 
//	}
//	dis[1]=0;
//	
//	for(i=1;i<=n-1;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//			if(dis[v[j]]>dis[u[j]]+w[j])
//			dis[v[j]]=dis[u[j]]+w[j];
//		}
//	}
//	
//	for(i=1;i<=n;i++)
//	printf("%d ",dis[i]);
//	
//	return 0;
//}
