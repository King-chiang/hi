#include<stdio.h>

int main()
{
  int a[]={1,4,6,9,13,16,19,28,40,100},b[11];
  int i,j,t;

  scanf("%d",&t);
  for(i=0;i<=9;i++)
  {
    if(t>=a[i])
    {
      for(j=9;j>=i+2;j--)
      {
        a[j]=a[j-1];
      }
      a[i+1]=t;
    }
  }

  for(i=0;i<=9;i++)
  {
    printf("%d ",a[i]);
  }

  return 0;
}
