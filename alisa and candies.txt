#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int a[n];
    int b[9]={1,1,1,1,1,1,1,1,1};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    if(a[i+1]>a[i] && b[i]>=b[i+1])
    {
        b[i+1]=b[i+1]+b[i];
    }
    else if(a[i+1]<a[i] && b[i]<=b[i+1])
	{
	  b[i]=b[i]+b[i+1];
	}
}
for(i=0;i<n;i++)
{
    count=count+b[i];
}
printf("%d ",count);
}
