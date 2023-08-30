#include <stdio.h>
int main()
{
    int array[100];
    int i,n,x,pos;
    printf("enter the number of elements in the array \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("input array elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nenter the new element to be inserted: ");
    scanf("%d",&x);
    printf("enter the position where element is to be inserted: ");
    scanf("%d",&pos);
    n=n+1;
    for(i=n-1;i>=pos;i--)
        array[i]=array[i-1];
    array[pos-1]=x; 
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
return 0;
}

