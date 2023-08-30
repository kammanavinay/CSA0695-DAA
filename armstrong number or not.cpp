#include<stdio.h>
int main()
{
	int num,r,sum=0,temp_num;
	printf("Enter the number to check armstrong:");
	scanf("%d",&num);
	temp_num=num;
	while (num>0)
	{
		r=num%10;                                                                  
		sum=sum+(r*r*r);
		num=num/10;
	}                                                                                                          
	if (temp_num==sum){
		printf("Entered number is armstrong");
		printf("\n");
	}
	else{   
		printf("Entered number is not armstrong");
		printf("\n");
	}
	return 0;
} 

