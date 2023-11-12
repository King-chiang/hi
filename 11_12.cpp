#include<stdio.h>



//DFS再解炸弹人

//char a[20][21];
//int book[20][20],n,m,mx,my,max;
//
//int getnum(int x,int y)
//{
//	int sum=0;
//	
//	while(a[x][y]!='#')
//	{
//		if(a[x][y]=='G')
//		sum++;
//		x++;
//	}
//	
//	while(a[x][y]!='#')
//	{
//		if(a[x][y]=='G')
//		sum++;
//		x--;
//	}
//	
//	while(a[x][y]!='#')
//	{
//		if(a[x][y]=='G')
//		sum++;
//		y++;
//	}
//	
//	while(a[x][y]!='#')
//	{
//		if(a[x][y]=='G')
//		sum++;
//		y--;
//	}
//	
//	return sum;
// } 
// 
// void dfs(int x,int y)
// {
// 	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
// 	
// 	int tx,ty,k,sum;
// 	
// 	sum=getnum(x,y);
// 	if(sum>max)
// 	{
// 		max=sum;
// 		mx=x;my=y;
//	 }
// 	
// 	for(k=0;k<=3;k++)
// 	{
// 		tx=x+next[k][0];
// 		ty=y+next[k][1];
// 		
// 		if(tx<0 || tx>n-1 || ty<0 || ty>m-1)
// 		continue;
// 		
// 		if(a[tx][ty]=='.' && book[tx][ty]==0)
// 		{
// 			book[tx][ty]=1;
// 			dfs(tx,ty);
//		 }
//	 }
//	 return;
// }
//
//int main()
//{
//	int startx,starty,i;
//	
//	scanf("%d%d%d%d",&n,&m,&startx,&starty);
//	for(i=0;i<=n-1;i++)
//	scanf("%s",&a[i]);
//	
//	book[startx][starty]=1;
//	max=getnum(startx,starty);
//	mx=startx;my=starty;
//	dfs(startx,starty);
//	
//	printf("放(%d,%d),炸死人最多,为%d",mx,my,max); 
//	 
//	return 0;
// } 
//记得回来再瞅瞅，炸死的银儿不对


//降落点所在岛的面积

//广度优先搜索 
//struct note
//{
//	int x,y;
//};
//
//int main()
//{
//	int book[51][51]={0},head,tail,n,m,startx,starty,i,j,sum=1;
//	int a[51][51];
//	struct note que[2501];
//	
//	scanf("%d%d%d%d",&n,&m,&startx,&starty);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//		    scanf("%d",&a[i][j]);	//只能说你是一个大傻der，emmm，竟然把&丢了	
//		}
//	}
//	
//	head=1;tail=1; 
//	book[startx][starty]=1;
//	que[head].x =startx;
//	que[head].y =starty;
//	tail++;
//	
//	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//	int tx,ty,k;
//	while(head<tail)
//	{
//		for(k=0;k<=3;k++)
//    	{
//    		tx=que[head].x +next[k][0];
//	    	ty=que[head].y +next[k][1];
//		
//	    	if(tx<1 || tx>n || ty<1 || ty>m)
//	    	continue;
//	    	if(a[tx][ty]>0 && book[tx][ty]==0)
//	    	{
//	    		sum++;
//	    		book[tx][ty]=1;
//	    		que[tail].x =tx;
//	    		que[tail].y =ty;
//	    		tail++;
//	    	}
//    	}
//    	head++;
//	}
//	printf("%d",sum);
//	return 0;
// } 

//深度优先搜索

//int a[51][51],book[51][51]={0},sum=1,n,m;
//
//void dfs(int x,int y)
//{
//	int tx,ty,k;
//	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//	
//	for(k=0;k<=3;k++)
//	{
//		tx=x+next[k][0];
//		ty=y+next[k][1];
//		
//		if(tx<1 || tx>n || ty<1 || ty>m)
//		continue;
//		
//		if(a[tx][ty]>0 && book[tx][ty]==0)
//		{
//			sum++;
//			book[tx][ty]=1;
//			dfs(tx,ty);
//		}
//	}
//}
//
//int main()
//{
//	int startx,starty,i,j;
//	scanf("%d%d%d%d",&n,&m,&startx,&starty);
//	for(i=1;i<=n;i++)
//	for(j=1;j<=m;j++)
//	scanf("%d",&a[i][j]);
//	
//	book[startx][starty]=1;
//	dfs(startx,starty);
//	
//	printf("%d",sum);
//	
//	return 0;
// } 
//嘿嘿嘿，开森，自己个儿写对了

//染色，染成-1
//int a[51][51],book[51][51]={0},sum=1,n,m;
//
//void dfs(int x,int y,int color)
//{
//	int tx,ty,k;
//	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//	
//	a[x][y]=color;
//	
//	for(k=0;k<=3;k++)
//	{
//		tx=x+next[k][0];
//		ty=y+next[k][1];
//		
//		if(tx<1 || tx>n || ty<1 || ty>m)
//		continue;
//		
//		if(a[tx][ty]>0 && book[tx][ty]==0)
//		{
//			sum++;
//			book[tx][ty]=1;
//			dfs(tx,ty,color);
//		}
//	}
//}
//
//int main()
//{
//	int startx,starty,i,j;
//	scanf("%d%d%d%d",&n,&m,&startx,&starty);
//	for(i=1;i<=n;i++)
//	for(j=1;j<=m;j++)
//	scanf("%d",&a[i][j]);
//	
//	book[startx][starty]=1;
//	dfs(startx,starty,-1);
//	
//	printf("%d\n",sum);
//	
//	for(i=1;i<=n;i++)
//	{
//	    for(j=1;j<=m;j++)
//    	{
//	    	printf("%3d",a[i][j]);
//    	}
//    	printf("\n");
//	}
//	
//	return 0;
// }  
 
//对所有小岛染色
//int a[51][51],book[51][51]={0},sum=1,n,m;
//
//void dfs(int x,int y,int color)
//{
//	int tx,ty,k;
//	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//	
//	a[x][y]=color;
//	
//	for(k=0;k<=3;k++)
//	{
//		tx=x+next[k][0];
//		ty=y+next[k][1];
//		
//		if(tx<1 || tx>n || ty<1 || ty>m)
//		continue;
//		
//		if(a[tx][ty]>0 && book[tx][ty]==0)
//		{
//			sum++;
//			book[tx][ty]=1;
//			dfs(tx,ty,color);
//		}
//	}
//	return;
//}
//
//int main()
//{
//	int startx,starty,i,j,num=0;
//	scanf("%d%d%d%d",&n,&m,&startx,&starty);
//	for(i=1;i<=n;i++)
//	for(j=1;j<=m;j++)
//	scanf("%d",&a[i][j]);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//			if(a[i][j]>0)
//			{
//				num--;
//		    	book[i][j]=1;
//            	dfs(i,j,num);
//			}
//		}
//	}
//	
//	printf("%d\n",-num);
//	
//	for(i=1;i<=n;i++)
//	{
//	    for(j=1;j<=m;j++)
//    	{
//	    	printf("%3d",a[i][j]);
//    	}
//    	printf("\n");
//	}
//	
//	return 0;
// }   


//水管游戏

//首先不输出路径

//int a[51][51],book[51][51]={0},n,m,flag;
//
//void dfs(int x,int y,int front)
//{
//	if(x==n && y==m+1)
//	{
//		flag=1;
//		return;
//	}
//	
//	if(x<1 || x>n || y<1 || y>m)
//	return;
//	
//	if(book[x][y]==1)
//	return;
//	
//	book[x][y]=1;
//	if(a[x][y]==5 || a[x][y]==6)
//	{
//		if(front==1)
//		{
//			dfs(x,y+1,1);//所有这些都不理解 
//		}
//		
//		if(front==2)
//		{
//			dfs(x+1,y,2);
//		}
//		
//		if(front==3)
//		{
//			dfs(x,y-1,3);
//		}
//		
//		if(front==4)
//		{
//			dfs(x-1,y,4);
//		}
//	}
//	
//	if(a[x][y]>=1 && a[x][y]<=4)
//	{
//		if(front==1)
//		{
//			dfs(x+1,y,2);
//			dfs(x-1,y,4);
//		}
//		
//		if(front==2)
//		{
//			dfs(x,y+1,1);
//			dfs(x,y-1,3);
//		}
//		
//		if(front==3)
//		{
//			dfs(x+1,y,2);
//			dfs(x-1,y,4);
//		}
//		
//		if(front==4)
//		{
//			dfs(x,y+1,1);
//			dfs(x,y-1,3);
//		}
//	}
//            //这里他还取消标记了，不理解 
//	return;
//}
//
//int main()
//{
//	int i,j;
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++)
//	for(j=1;j<=m;j++)
//	scanf("%d",&a[i][j]);
//	
//	dfs(1,1,1);
//	
//	if(flag==0)
//	printf("impossible");
//	
//	if(flag==1)
//	printf("ok");
//	
//	return 0;
// } 
 //还有找路径的，就不看了，就这个我都不明白 


//深度优先搜索遍历

//int e[101][101],book[101],n,m,sum;
//
//void dfs(int cur)
//{
//	int i;
//	printf("%d",cur);
//	sum++;
//	
//	if(sum==n)
//	return;
//	
//	for(i=1;i<=n;i++)
//	{
//		if(e[cur][i]==1 && book[i]==0)
//		{
//			book[i]=1;
//			dfs(i);
//		}
//	}
//	return;
// } 
//
//int main()
//{
//	int i,j,k;
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
//	
//	for(k=1;k<=n;k++)
//	{
//		scanf("%d%d",&i,&j);
//    	e[i][j]=1;
//    	e[j][i]=1;
//	}
//	
//	book[1]=1;
//	dfs(1);
//	
//	return 0;
//}


//广度优先搜索遍历

//int main()
//{
//	int e[101][101],book[101]={0},que[101];
//	int i,j,k,head=1,tail=1,n,m;
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
//	for(k=1;k<=n;k++)
//	{
//		scanf("%d%d",&i,&j);
//		e[i][j]=1;
//		e[j][i]=1;
//	}
//	
//	que[head]=1;
//	book[1]=1;
//	tail++;
//	
//	while(head<tail)
//	{
//		for(i=1;i<=n;i++)
//    	{
//    		if(e[que[head]][i]==1 && book[i]==0)
//	    	{
//		    	que[tail]=i;
//			    tail++;
//			    book[i]=1;
//    		}  
//	    }
//	    head++;
//	}
//	
//	if(tail>n)
//	{
//		for(i=1;i<tail;i++)
//		printf("%d",que[i]);
//	}
//	
//	return 0;
// } 



//百度地图——>深度优先搜索

int e[101][101],book[101],n,m,min=99999999;

void dfs(int cur,int dis)
{
	int i;
	if(dis>min)
	return;
	
	if(cur==n && dis<min)
	{
		min=dis;
		return;
	}
	
	for(i=1;i<=n;i++)
	{
		if(e[cur][i]>0 && e[cur][i]<99999999 && book[i]==0)
		{
			book[i]=1;
			dfs(i,dis+e[cur][i]);
			book[i]=0;
		}
	}
	return;
}

int main()
{
	int i,j,a,b,c;
	
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==j)
			e[i][j]=0;
			else
			e[i][j]=99999999;
		}
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		e[a][b]=c;
	}
	
	book[1]=1;
	dfs(1,0);
	
	printf("%d",min);
	
	return 0;
 } 













