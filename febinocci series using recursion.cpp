#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	printf("enter the n value :");
	scanf("%d",&n);
	a = b = 1;
	printf("\n %d %d",a,b);
	for(i=1;i<n-2;++i)
	{
		c = a + b;
		printf(" %d",c);
		a = b;
		b = c;
	}
	return 0;
}

