#include<stdio.h>

//小猫钓鱼 
//struct queue
//{
//	int data[1000];
//	int head;
//	int tail;
//};
//
//struct stack
//{
//	int data[10];
//	int top;
//};
//
//int main()
//{
//	struct queue q1,q2;
//	struct stack s;
//	int book[10]={0};
//	int i,t;
//	
//	q1.head =1;q1.tail =1;
//	q2.head =1;q2.tail =1;
//	s.top =0;
//	
//	for(i=1;i<=6;i++)
//	{
//		scanf("%d",&(q1.data [q1.tail ]));
//		q1.tail ++;
//	}
//	for(i=1;i<=6;i++)
//	{
//		scanf("%d",&(q2.data [q2.tail ]));
//		q2.tail ++;
//	}
//	
//	while(q1.head <q1.tail && q2.head <q2.tail )
//	{
//		t=q1.data [q1.head ];
//		if(book[t]==0)
//		{
//			q1.head ++;
//			s.top ++;
//			s.data [s.top ]=t;
//			book[t]=1;
//		}
//		else
//		{
//			q1.head ++;
//			q1.data [q1.tail ]=t;
//			q1.tail ++;
//			while(s.data [s.top]!=t)
//			{
//				book[s.data [s.top ]]=0;//why一定要放在第一句，放最后为啥不行 
//				q1.data [q1.tail ]=s.data [s.top ];
//				q1.tail ++;
//				s.top --;
//			}
//		}
//		t=q2.data [q2.head ];
//		if(book[t]==0)
//		{
//			q2.head ++;
//			s.top ++;
//			s.data [s.top ]=t;
//			book[t]=1;
//		}
//		else
//		{
//			q2.head ++;
//			q2.data [q2.tail ]=t;
//			q2.tail ++;
//			while(s.data [s.top]!=t)
//			{
//				book[s.data [s.top ]]=0;
//				q2.data [q2.tail ]=s.data [s.top ];
//				q2.tail ++;
//				s.top --;
//			}
//		}
//	}
//	
//	if(q2.head ==q2.tail )
//	{
//		printf("小哼赢\n");
//		printf("牌为 ");
//		for(i=q1.head ;i<=q1.tail-1;i++)
//		{
//			printf("%d ",q1.data [i]); 
//		}
//		if(s.top >0)
//		{
//			printf("\n桌上牌为 ");
//			for(i=1;i<=s.top ;i++)
//			{
//				printf("%d ",s.data [i]);
//			 } 
//		}
//		else
//		{
//			printf("\n桌上无牌\n");
//		}
//	}
//	else
//	{
//		printf("小哈赢\n");
//		printf("牌为 ");
//		for(i=q2.head ;i<=q2.tail-1;i++)
//		{
//			printf("%d ",q2.data [i]); 
//		}
//		if(s.top >0)
//		{
//			printf("\n桌上牌为 ");
//			for(i=1;i<=s.top ;i++)
//			{
//				printf("%d ",s.data [i]);
//			 } 
//		}
//		else
//		{
//			printf("\n桌上无牌\n");
//		}
//	}
//	
//	return 0;
//}


//模拟题
//1. 计划周一至周五每天做a 道题，周六和周日每天做 b 道题。请计算，按计划将在第几天实现做题数大于等于 n 题
//#include<stdio.h>
//
//int main()
//{
//	long long a,b,n,day,sum=0;
//	scanf("%ld%ld%ld",&a,&b,&n);
//	for(day=1;;day++)
//	{
//		if(day%7==0 || (day+1)%7==0)
//		{
//			sum=sum+b;
//		}
//		else
//		{
//			sum=sum+a;
//		}
//		if(sum>=n)
//		{
//			break;
//		}
//	}
//	printf("%ld",day);
//	return 0;
//}
//它主要的坑点在于数据类型，因为它底下有特地说明数的范围，很大，所以用了longlong 

//2.收集了连续N的最高气温数据。求最高气温一直上升的最长连续天数
//#include<stdio.h>
//int main()
//{
//	long long N,tmp;
//	int i;
//	int a[100000];
//	long long b[100000];
//	int count=1;
//	scanf("%ld",&N);
//	for(i=1;i<=N;i++)
//	{
//	    scanf("%d",&a[i]);
//	}
//	for(i=1;i<=N;i++)
//	{
//		if(a[i]<a[i+1])
//		{
//			count++;
//		}
//		else
//		{
//			b[i]=count;
//			count=1;
//		}
//	}
//	long long max=b[1];
//	for(i=1;i<=N;i++)
//	{
//		if(b[i]>max)
//		{
//			tmp=b[i];
//			b[i]=max;
//			max=tmp;
//		}
//	}
//	printf("%ld",max);
//	return 0;
//}
//自己个儿感觉没啥问题，但只过了5个测试点 

//3.披萨店有3种披萨。分别有6片的、8片的和10片的。 做好分别需要 
//15,20,25分钟。n个人订一些披萨。数量不能小于n个披萨。请问最少需要多久
//#include<stdio.h>
//int main()
//{
//	int a,b,c,t,i,h,j=0,tmp;
//	int n[100000];
//	int k[100000];
//	scanf("%d",&t);
//	for(i=0;i<t;i++)
//	{
//		scanf("%d",&n[i]);
//	}
//	for(i=0;i<t;i++)
//	{
//		for(a=0;a<=(n[i]/6);a++)
//		{
//			for(b=0;b<=(n[i]/8);b++)
//			{
//				for(c=0;c<=(n[i]/10);c++)
//				{
//					if(6*a+8*b+10*c>=n[i])
//					{
//						k[j]=15*a+20*b+25*c;
//						j++;
//					}
//				}
//			}
//		}
//		int min=k[0];
//		for(h=0;h<j;h++)
//		{
//			if(k[h]<min)
//			{
//				tmp=k[h];
//				k[h]=min;
//				min=tmp;
//			}
//		}
//		printf("%d\n",min);
//	}
//	return 0;
//}
//自己都觉得自己写的好麻烦，唉，根本不对 


//链表这儿一个用指针，一个用数组，绕得很，先往后吧，主要也不是这个


//嘿嘿，暴力来了
//题：_ _ _+_ _ _=_ _ _ 用1--9填，每个数只用一次,总共多少种情况 
//int main()
//{
//	int a,b,c,d,e,f,g,h,i,total;
//	for(a=1;a<=9;a++)
//	{
//		for(b=1;b<=9;b++)
//		{
//			for(c=1;c<=9;c++)
//			{
//				for(d=1;d<=9;d++)
//				{
//					for(e=1;e<=9;e++)
//					{
//						for(f=1;f<=9;f++)
//						{
//							for(g=1;g<=9;g++)
//							{
//								for(h=1;h<=9;h++)
//								{
//									for(i=1;i<=9;i++)
//									{
//										if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i
//										       &&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i
//										             &&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i
//										                   &&d!=e&&d!=f&&d!=g&&d!=h&&d!=i
//														         &&e!=f&&e!=g&&e!=h&&e!=i
//																       &&f!=g&&f!=h&&f!=i
//																	         &&g!=h&&g!=i
//																			       &&h!=i
//												 &&(a*100+b*10+c+d*100+e*10+f==g*100+h*10+i))
//											{
//												total++; 
//												printf("%d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i);
//											}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	printf("%d",total/2);
//	return 0;
//}

//哈哈哈哈，xue微的优化一下                10
//int main()
//{
//	int a[10],book[10]={0},i,total=0,sum;
//	for(a[1]=1;a[1]<=9;a[1]++)
//	{
//		for(a[2]=1;a[2]<=9;a[2]++)
//		{
//			for(a[3]=1;a[3]<=9;a[3]++)
//			{
//				for(a[4]=1;a[4]<=9;a[4]++)
//				{
//					for(a[5]=1;a[5]<=9;a[5]++)
//					{
//						for(a[6]=1;a[6]<=9;a[6]++)
//						{
//							for(a[7]=1;a[7]<=9;a[7]++)
//							{
//								for(a[8]=1;a[8]<=9;a[8]++)
//								{
//									for(a[9]=1;a[9]<=9;a[9]++)
//									{
//										for(i=1;i<=9;i++)
//										{
//											book[a[i]]=1;
//										}
//										sum=0;
//										for(i=1;i<=9;i++)
//										{
//											sum+=book[i];
//										}
//										if(sum==9 && a[1]*100+a[2]*10+a[3]+a[4]*100
//										       +a[5]*10+a[6]==a[7]*100+a[8]*10+a[9])
//										{
//											total++;
//											printf("%d %d %d %d %d %d %d %d %d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	printf("%d",total/2);
//	return 0;
//}
//大事不妙，结果不一样！！！！！


//炸弹人
//int main()
//{
//	char a[20][20];
//	int n,m,i,j,sum,map=0,x,y,p,q;
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		scanf("%s",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(a[i][j]=='.')
//			{
//				sum=0;
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//					{
//						sum++;
//					}
//					x--;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//					{
//						sum++;
//					}
//					x++;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//					{
//						sum++;
//					}
//					y--;
//				}
//				
//				x=i;y=j;
//				while(a[x][y]!='#')
//				{
//					if(a[x][y]=='G')
//					{
//						sum++;
//					}
//					y++;
//				}
//				if(sum>map)
//             	{
//		            map=sum;
//		            p=i;q=j;
//	            }
//			}
//		}
//	}
//	printf("(%d,%d),%d",(p,q),map);
//	return 0;
// } 





































