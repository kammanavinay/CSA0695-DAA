#include<stdio.h>
int main()
{
	int n,i,count;
	printf("enter the number:");
	scanf("%d",&n);
	for(i = 0;i <= n;i++)
	{
		n % i == 0;
		count++;
	}
	if(count == 2)
	printf("Prime number");
	else
	printf("not  prime");
	return 0;
}

