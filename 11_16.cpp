#include<stdio.h>



 //Bellman算法的延续，那天没写完，不晓得干啥事去了，似乎是看剧去了，为了吃火龙果，哈哈哈哈
int main()
{
	int dis[10],bak[10],u[10],v[10],w[10];
	int i,j,n,m,flag;
	
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		dis[i]=99999999;
	}
	
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&u[i],&v[i],&w[i]);
	}
	
	dis[1]=0;
	for(i=1;i<=n-1;i++)
	{
		flag=0;
		for(j=1;j<=n;j++)
		bak[i]=dis[i];
		for(j=1;j<=m;j++)
		{
			if(dis[v[j]]>dis[u[i]]+w[i])
			dis[v[j]]=dis[u[i]]+w[i]; 
		}
		for(j=1;j<=n;j++)
		{
			if(bak[i]!=dis[i])
			flag=1;
		}
		if(flag==0)
		break;
	}
	
	for(j=1;j<=m;j++)
	{
		if(dis[v[j]]>dis[u[i]]+w[i])
		printf("有负权回路\n");
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",dis[i]);
	}
	
	
	return 0;
 }   
