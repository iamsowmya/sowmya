#include<stdio.h>
int main()
{
	long int n,fact=1;
	scanf("%ld",&n);
	long int i,c=0;
	for(i=n;i>=1;i--)
	{
	fact=fact*i;
}
printf("%ld\n",fact);
	for(i=5;n/i>=1;i=i*5)
	{
		c=c+n/i;
		n=n/5;
	}
	
	printf("%ld",c);
}
