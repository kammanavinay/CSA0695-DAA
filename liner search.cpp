#include<stdio.h>
int main()
{
	int a[100],n,i,x,z;
	printf("\nenter the no of elements: ");
	scanf("%d",&n);
	printf("\nenter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		x=i+1;
		if(a[i]==z)
		{
			printf("\nsuccesfully found the element.");
			printf("\nElement is found in the position of %d",x);
			printf("\n %d number of searches are done.",x);
			break;
		}
		else{
			printf("\n element not found");
			printf("\n after comparing through %d times",x);
		}
	}
	return 0;
}


