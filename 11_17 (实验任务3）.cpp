#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand(time(0));
//   	int number=rand()%20+1;
//   	printf("%d\n",number);
//   	int guess,i=1;
//   	
//   	scanf("%d",&guess);
//   	
//   	while(guess!=number && i<=5)
//   	{
//   		printf("还剩%d次机会\n",5-i);
//   		i++;
//   		scanf("%d",&guess);
//	}
//	   
//	if(i<=5)
//		printf("%d  1999-10-10\n",i);
//	
//	if(i==1)
//		printf("希望能搞好多好多钱\n");
//	
//	if(i==6)
//	{
//		printf("***!\n");
//	}
//	
//	return 0;
//}



//Bellman-Ford队列优化
//它用了邻接表，本人不会，so私自改一下 
//int main()
//{
//	int i,j,n,m,head=1,tail=1;
//	int u[10],v[10],w[10],book[10],dis[10],que[10]={0};
//	
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++)
//	{
//		dis[i]=99999999;
//	}
//	for(i=1;i<=m;i++)
//	{
//		scanf("%d%d%d",&u[i],&v[i],&w[i]);
//	 } 
//	dis[1]=0;
//	book[1]=1;
//	que[head]=1;
//	tail++;
//	
//	for(i=1;i<=n-1;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//			if(dis[v[j]]>dis[u[j]]+w[j])
//			
//		}
//	}
//	 
//	return 0;
// } 
//俺不会，算了，拜拜
