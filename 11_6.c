#include<stdio.h>


//炸弹人 

//int main()
//{
//	char a[20][21];
//	int n,m,i,j,sum,x,y,map=0,p,q;
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		scanf("%s",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			if(a[i][j]=='.')
//			{
//				sum=0;
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//						sum++;
//					x++;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//						sum++;
//					x--;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//						sum++;
//					y++;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//						sum++;
//					y--;
//				}
//				if(sum>map)
//				{
//					map=sum;
//					p=i;q=j;
//				}
//			}
//		}
//	}
//	printf("应放(%d,%d),炸死%d人\n",p,q,map);
//	return 0;
//}


//火柴棍等式

//int main()
//{
//	int i,j,k,m;
//	int a[10]={6,2,5,5,4,5,6,3,7,6};
//	scanf("%d",&m);
//	for(i=0;i<=m;i++)
//	for(j=0;j<=m;j++)
//	for(k=0;k<=m;k++)
//	{
//		if((a[i]+a[j]+a[k]+4==m) && (i+j==k))
//		printf("%d+%d=%d\n",i,j,k);
//	}
//	return 0; 
//}
//想太简单了，年轻人
//有个点不明白


//123的全排列
int main()
{
	int a,b,c;
	for(a=1;a<=3;a++)
	for(b=1;b<=3;b++)
	for(c=1;c<=3;c++)
	{
		if(a!=b && b!=c && a!=c)
		printf("%d%d%d ",a,b,c);
	}
	return 0;
 } 

 












































































