#include<stdio.h>



//再解炸弹人
//广度优先搜索

struct note
{
	int x,y;
 } ;
 
 char a[20][21];
 
 int getnum(int i,int j)
 {
 	int sum=0,x,y;
 	x=i;y=j;
 	while(a[x][y]!='#')
 	{
 		if(a[x][y]=='G')
 		sum++;
 		x--;
	 }
	 x=i;y=j;
	while(a[x][y]!='#')
 	{
 		if(a[x][y]=='G')
 		sum++;
 		x++;
	 }
	 x=i;y=j;
	while(a[x][y]!='#')
 	{
 		if(a[x][y]=='G')
 		sum++;
 		y--;
	 }
	 x=i;y=j;
	while(a[x][y]!='#')
 	{
 		if(a[x][y]=='G')
 		sum++;
 		y++;
	 }
	return sum;
 }
 
int main()
{
	struct note que[401];
	int book[20][20]={0};
	int head,tail,n,m,k,startx,starty,i,max=0,mx,my,sum;
	
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	
	scanf("%d %d %d %d",&n,&m,&startx,&starty);
	for(i=0;i<=n-1;i++)
	scanf("%s",&a[i]);
	
	head=1;tail=1;
	que[tail].x =startx;
	que[tail].y =starty;
	tail++;
	book[startx][starty]=1;
	
	max=getnum(startx,starty);
	mx=startx;my=starty;
	
	int tx,ty;
	while(head<tail)
	{
		for(k=0;k<=3;k++)
    	{
	    	tx=startx+next[k][0];
	    	ty=starty+next[k][1];
		    if(tx<0 || tx>n-1 || ty<0 || ty>m-1)
	    	continue;
	    	if(a[tx][ty]=='.' && book[tx][ty]==0)
	    	{
	    		book[tx][ty]=1;
	    		que[tail].x =tx;
	    		que[tail].y =ty;
	    		tail++;
	    		sum=getnum(tx,ty);
	    		
	    		if(sum>max)
	    		{
	    			max=sum;
	    			mx=tx;my=ty;
				}
			}
    	}
    	head++;
	}
	
	printf("炸弹放在（%d,%d）时，炸死敌人最多，为%d人\n",mx,my,max);
	
	return 0;
 } 
