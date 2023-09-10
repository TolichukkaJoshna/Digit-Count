#include<stdio.h>
main()
{
	int i=1,c=0,n;
	printf("enter a number..:");
	scanf("%d",&n);
	while(i<=n)
	{
		n=n/10;
		c++;
	}
	printf("\ncount of digits=%d",c);
}
